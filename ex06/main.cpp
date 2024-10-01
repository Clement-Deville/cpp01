/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:16:13 by cdeville          #+#    #+#             */
/*   Updated: 2024/10/01 12:03:00 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	test;

	if (argc != 2)
		return (std::cerr << "Error, programm needs one argument."
			<< std::endl, 1);
	test.complain(argv[1]);
	return (0);
}
