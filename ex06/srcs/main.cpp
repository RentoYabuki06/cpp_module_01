/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:25:19 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/03 21:53:10 by yabukirento      ###   ########.fr       */
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
		return (EXIT_FAILURE);
	}
	harl.complain(argv[1]);
	return (EXIT_SUCCESS);;
}
