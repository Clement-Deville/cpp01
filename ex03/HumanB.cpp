/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:25:02 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/28 17:50:23 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string newName)
	{
		std::cout << "\e[0;32mArgument HumanB constructor called: \e[0;33m" <<
			newName << "\e[0m" <<  std::endl;
		name = newName;
		weapon = NULL;
	}

	HumanB::~HumanB()
	{
		std::cout << "\e[0;31mHumanA destructor called: \e[0;33m"
			<< name << "\e[0m" << std::endl;
	}

	void HumanB::setWeapon(Weapon &newWeapon)
	{
		weapon = &newWeapon;
	}

	void HumanB::attack(void)
	{
		if (weapon == NULL)
			std::cerr << name << " can't attack cause he need a weapon"
				<< std::endl;
		std::cout << name <<" attacks with their "
			<< weapon->getType() << std::endl;
	}
