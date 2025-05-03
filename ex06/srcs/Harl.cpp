/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:25:20 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 22:04:48 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug(void)
{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int	level_index = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			level_index = i;
			break;
		}
	}
	switch (level_index)
	{
		case 0:
			(this->*fptr[0])();
		case 1:
			(this->*fptr[1])();
		case 2:
			(this->*fptr[2])();
		case 3:
			(this->*fptr[3])();
			break;
		default:
			std::cerr << "Invalid log level: " << level << std::endl;
	}
}
