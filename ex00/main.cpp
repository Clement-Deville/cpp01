/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:00:01 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/27 12:28:42 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
// Allocate a new Zombie on the heap and return it.

void	randomChump( std::string name );
// Allocate a new Zombie on the stack, annonce it, and it get automaticly
// destroyed after leaving the randomChump function scope

void	delete_Zombies(Zombie	*ZombieTab[10])
{
	for (short int i = 0; i < 10; i++)
	{
		if (ZombieTab[i] == NULL)
			continue;
		delete(ZombieTab[i]);
		ZombieTab[i] = NULL;
	}
}

void	annonce_Zombies(Zombie	*ZombieTab[10])
{
	for (short int i = 0; i < 10; i++)
	{
		if (ZombieTab[i] == NULL)
			continue;;
		ZombieTab[i]->annonce();
	}
}

int	main(void)
{
	Zombie	*ZombieTab[10];

	for (short int i = 0; i < 10; i++)
		ZombieTab[i] = NULL;

	ZombieTab[0] = newZombie("Philip");
	ZombieTab[1] = newZombie("John");
	ZombieTab[2] = newZombie("Peter");
	ZombieTab[3] = newZombie("Thomas");
	ZombieTab[4] = newZombie("");
	ZombieTab[5] = newZombie("Matthew");
	annonce_Zombies(ZombieTab);
	delete_Zombies(ZombieTab);
	randomChump("Random Marry");
	randomChump("Random Catherine");
	return (0);
}
