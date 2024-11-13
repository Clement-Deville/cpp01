/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:20:57 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/12 13:35:44 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "\e[0;32mDefault Weapon constructor called\e[0m" << std::endl;
	type = "";
}

Weapon::Weapon(const std::string name)
{
	std::cout << "\e[0;32mArgument Weapon constructor called: \e[0;33m"
		<< name << "\e[0m" << std::endl;
	type = name;
}

Weapon::~Weapon()
{
	std::cout << "\e[0;31mWeapon destructor called: \e[0;33m"
		<< type << "\e[0m" << std::endl;
}

const std::string &Weapon::getType(void)
{
	return (type);
}
void Weapon::setType(const std::string newType)
{
	type = newType;
}
