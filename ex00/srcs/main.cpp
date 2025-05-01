/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:43:22 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/01 21:33:38 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie* zombie01= newZombie("First Zombie");
	zombie01->announce();
	randomChump("Second Zombie");
	delete zombie01;
	return (EXIT_SUCCESS);
}
