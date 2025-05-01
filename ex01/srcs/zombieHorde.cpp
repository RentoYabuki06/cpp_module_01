/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:38:33 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/01 20:17:13 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie* newZombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		newZombies[i].setName(name);
	}
	return newZombies;
}
