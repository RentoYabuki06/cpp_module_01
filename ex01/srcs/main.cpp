/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:38:28 by ryabuki           #+#    #+#             */
/*   Updated: 2025/05/04 09:55:37 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
	int N = 3;
	Zombie* horde = zombieHorde(N, "menber of horde");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Index [" << i << "] ";
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
