/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:10:09 by thibault          #+#    #+#             */
/*   Updated: 2025/03/22 21:54:47 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*newZombie;
	int		i;
	
	newZombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		newZombie[i].setName(name);
		i++;
	}
	return (newZombie);
}