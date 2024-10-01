/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:16:28 by cdeville          #+#    #+#             */
/*   Updated: 2024/10/01 11:27:17 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
private:
	/* data */
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	void	(Harl::* ptr_tab[4])(void);
public:
	Harl();
	~Harl();

	void	complain( std::string level );
};

# define DEBUG_MSG "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
# define  INFO_MSG "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING_MSG "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month."
# define  ERROR_MSG "[ERROR]\nThis is unacceptable! I want to speak to the manager now."

#endif
