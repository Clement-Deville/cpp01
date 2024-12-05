/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:57:36 by cdeville          #+#    #+#             */
/*   Updated: 2024/12/05 09:29:29 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"

int	open_files(std::ifstream &infile, std::ofstream &outfile,
					std::string inf_name, std::string &outf_name, std::string &tmp)
{
	infile.open(inf_name.c_str());
	if (infile.fail())
		return (std::cerr << OPEN_ERR << inf_name << std::endl, 1);
	if (getline(infile, tmp).fail() && !infile.eof())
		return (infile.close(),
					std::cerr << READ_ERR << inf_name << std::endl, 1);
	outf_name = std::string(inf_name) + std::string(".replace");
	outfile.open(outf_name.c_str());
	if (outfile.is_open() == false)
		return (infile.close(),
					std::cerr << OPEN_ERR << outf_name << std::endl, 1);
	return (0);
}

int	close_files(std::ifstream &infile, std::ofstream &outfile,
					std::string inf_name, std::string outf_name)
{
	infile.close();
	outfile.close();
	if (infile.fail() && !infile.eof())
		return (std::cerr << READ_ERR << inf_name << std::endl, 1);
	if (outfile.fail() && !infile.eof())
		return (std::cerr << WRITE_ERR << outf_name << std::endl, 1);
	return (0);
}

void replace(std::string &tmp, std::string s1, std::string s2)
{
	size_t	i;

	i = 0;
	i = tmp.find(s1, i);
	while (i != std::string::npos)
	{
		tmp.erase(i, s1.size());
		tmp.insert(i, s2);
		i = tmp.find(s1, i + 1);
	}
}

int	replace_iter(std::ofstream &outfile,
					std::string s1, std::string s2, std::string &tmp)
{
	replace(tmp, s1, s2);
	outfile << tmp;
	if (outfile.fail())
		return (1);
	tmp.clear();
	return (0);
}

int	main(int argc, char *argv[])
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		tmp;
	std::string		name;

	if (argc != 4)
		return (std::cerr << "Error" << std::endl, 1);
	if (*argv[2] == '\0')
		return (std::cerr
			<< "Error, input patern can't be empty" << std::endl, 1);
	if (open_files(infile, outfile, argv[1], name, tmp))
		return (1);
	if (infile.eof() == false)
		tmp += '\n';
	if (replace_iter(outfile, argv[2], argv[3], tmp))
		return (close_files(infile, outfile, argv[1], name));
	while (getline(infile, tmp))
	{
		if (infile.eof() == false)
			tmp += '\n';
		if (replace_iter(outfile, argv[2], argv[3], tmp))
			break ;
	}
	return (close_files(infile, outfile, argv[1], name));
}
