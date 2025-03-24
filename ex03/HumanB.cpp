/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:25:20 by thibault          #+#    #+#             */
/*   Updated: 2025/03/24 20:27:26 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack()
{
	std::cout << this->_name << "attacks with their" 
	<< this->_weapon.getType() << std::endl;
}