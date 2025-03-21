/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:00:00 by thibault          #+#    #+#             */
/*   Updated: 2025/03/21 16:40:45 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " zombie has been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::string	name;

	name = this->_name;
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}