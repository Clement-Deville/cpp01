/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:24:44 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 16:40:13 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie *Horde;
	int		N;

	N = 12;
	Horde = zombieHorde(N, "Salut");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Index number: " << i << std::endl;
		Horde[i].annonce();
	}
	delete []Horde;
	return (0);
}
