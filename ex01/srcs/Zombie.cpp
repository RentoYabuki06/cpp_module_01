/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:55:33 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/05 12:59:20 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) 
{
	std::cout << "Zombie [" << this->getName() << "] created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie [" << this->getName() << "] destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout  << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

const std::string& Zombie::getName() const
{
	return this->name;
}
