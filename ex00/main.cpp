/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:12:11 by thibault          #+#    #+#             */
/*   Updated: 2025/03/21 16:23:20 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie	*z = newZombie("Tib");
	z->announce();
	randomChump("Bobby");
	delete z;
	return (0);
}