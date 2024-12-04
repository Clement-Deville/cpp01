/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:17:30 by cdeville          #+#    #+#             */
/*   Updated: 2024/12/04 14:54:35 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "\e[0;32mDefault Harl constructor called\e[0m" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\e[0;33mHarl destructor called: " << "\e[0m" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

static int	find_index(std::string level)
{
	std::string	level_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(level_name[i]) == 0)
		{
			return (i);
		}
	}
	return (-1);
}

void	Harl::complain( std::string level )
{
	int	i;

	i = 0;
	switch ( find_index(level) )
	{
	case -1:
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	case 0:
		this->debug();
	case 1:
		this->info();
	case 2:
		this->warning();
	case 3:
		this->error();
	default:
		break;
	}
}
