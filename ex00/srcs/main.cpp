/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:43:22 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/04 09:52:21 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie* zombie01= newZombie("First Zombie");
	zombie01->announce();
	randomChump("Second Zombie");
	delete zombie01;
	return (0);
}
