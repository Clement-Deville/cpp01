/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:21:05 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/12 13:35:33 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "string"
# include "iostream"

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(const std::string name);
	~Weapon();
	const std::string &getType(void);
	void setType(const std::string newType);
};

#endif
