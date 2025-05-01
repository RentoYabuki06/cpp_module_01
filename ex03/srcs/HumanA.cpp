/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:55:06 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/01 21:29:13 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon), _name(name) {}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}
