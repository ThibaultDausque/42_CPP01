/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 21:34:54 by thibault          #+#    #+#             */
/*   Updated: 2025/03/22 21:54:40 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*zombies;
	int		i;
	int		N;

	N = 20;
	zombies = zombieHorde(N, "Bobby");
	i = 0;
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}