/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:25:20 by thibault          #+#    #+#             */
/*   Updated: 2025/03/25 18:33:00 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = weapon;	
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " 
	<< this->_weapon.getType() << std::endl;
}