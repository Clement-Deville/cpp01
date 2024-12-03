/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:17:30 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/19 13:02:23 by cdeville         ###   ########.fr       */
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

void	Harl::complain( std::string level )
{
	void	(Harl::* ptr_tab[4])(void) =
		{&Harl::debug,  &Harl::info,  &Harl::warning,  &Harl::error};
	std::string	level_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(level_name[i]) == 0)
		{
			(this->*ptr_tab[i])();
			return ;
		}
	}
	std::cerr << "No matching complain" << std::endl;
}
