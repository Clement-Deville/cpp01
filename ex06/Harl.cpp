/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:17:30 by cdeville          #+#    #+#             */
/*   Updated: 2024/10/01 12:13:57 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->ptr_tab[0] = &Harl::debug;
	this->ptr_tab[1] = &Harl::info;
	this->ptr_tab[2] = &Harl::warning;
	this->ptr_tab[3] = &Harl::error;
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

// void	Harl::complain( std::string level )
// {
// 	std::string	level_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (level.compare(level_name[i]) == 0)
// 		{
// 			for (int j = i; j < 4; j++)
// 				(this->*ptr_tab[j])();
// 			return ;
// 		}
// 	}
// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// }

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
		(this->*ptr_tab[0])();
	case 1:
		(this->*ptr_tab[1])();
	case 2:
		(this->*ptr_tab[2])();
	case 3:
		(this->*ptr_tab[3])();
	default:
		break;
	}
}
