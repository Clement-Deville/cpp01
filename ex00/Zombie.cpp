/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:01:44 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 14:16:34 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "\e[0;32mDefault Zombie constructor called\e[0m" << std::endl;
	this->name.empty();
}

Zombie::Zombie(std::string name)
{
	std::cout << "\e[0;32mArgument Zombie constructor called: \e[0;33m"
		<< name << "\e[0m" << std::endl;
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "\e[0;31mZombie destructor called: \e[0;33m"
		<< this->name << "\e[0m" << std::endl;
}

void	Zombie::annonce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
