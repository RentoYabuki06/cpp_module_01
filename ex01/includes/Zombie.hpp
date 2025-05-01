/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:53:43 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/01 20:05:59 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string.h>
#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif

