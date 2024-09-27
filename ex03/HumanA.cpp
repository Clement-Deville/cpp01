/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:24:48 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 19:26:04 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &refWeapon):
	name(name), weapon(refWeapon)
{
	std::cout << "\e[0;32mArgument HumanA constructor called with name: \e[0;33m"
		<< name << " \e[0;32mand weapon: \e[0;33m" << this->weapon.getType() << std::endl;
	(void)refWeapon;
}

HumanA::~HumanA()
{
	std::cout << "\e[0;31mHumanA destructor called: \e[0;33m"
		<< this->name << "\e[0m" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->name <<" attacks with their "
		<< this->weapon.getType() << std::endl;
}
