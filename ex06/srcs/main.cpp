/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:25:19 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/04 10:09:27 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Error			: Invalid arguments.\n"
			<< "Usage			: ./Harl3 <level>\n"
			<< "Available levels	: DEBUG, INFO, WARNING, ERROR\n"
			<< "Example			: ./Harl3 WARNING" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
