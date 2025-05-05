/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:38:33 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/05 13:03:47 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie* newZombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::ostringstream set_name;
		set_name << name << "_index" << i;
		newZombies[i].setName(set_name.str());
	}
	return newZombies;
}
