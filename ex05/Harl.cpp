/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:42:05 by thibault          #+#    #+#             */
/*   Updated: 2025/03/26 17:33:13 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	
}

Harl::~Harl()
{
	
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon " 
	<< "for my 7XL-Double-cheese-triple-pickle"
	<< "-special-ketchup burger. I really do." << std::endl;
	std::cout << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn't put enough bacon in my burger! "
	<< "If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon "
	<< "for free. I've been coming for years, whereas you "
	<< "started working here just last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string	level)
{
	void		(Harl:: *ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*ptr[i]) ();
			return ;
		}
		i++;
	}
	return ;
}