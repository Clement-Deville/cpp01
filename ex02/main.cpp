/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:44:13 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 17:04:53 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string("HI THIS IS BRAIN");
	std::cout << string << std::endl;
	std::string *stringPTR = &string;
	std::cout << "adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "adress of string: " << &string << std::endl;
	std:: string &stringREF = string;
	std::cout << "adress held by stringREF: " << &stringREF << std::endl;
	std::cout << "---------------\n";
	std::cout << "value of string: " << string << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << string << std::endl;
	std::cout << "---------------\n";
	std::cout << "Modification of string by \"New string\"\n";
	string = "New string";
	std::cout << "value of string: " << string << std::endl;
	std::cout << "value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << string << std::endl;
	return (0);
}
