/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:25:02 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 18:44:52 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string name)
	{
		std::cout << "\e[0;32mArgument HumanB constructor called: \e[0;33m" <<
			name << std::endl;
		this->name = name;
	}
	HumanB::~HumanB()
	{
		std::cout << "\e[0;31mHumanA destructor called: \e[0;33m"
			<< this->name << "\e[0m" << std::endl;
	}
