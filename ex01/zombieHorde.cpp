/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:25:27 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 16:26:32 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*Horde;

	if (N < 0)
		std::cerr << "N can't be negative" << std::endl;
	Horde = new Zombie[N];
	if (Horde == NULL)
	{
		std::cerr << "Allocation failed on new" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		Horde[i] = Zombie(name);
	return (Horde);
}
