/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:32:09 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/01 21:30:37 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory address of the string variable	 : [" << &str << "]" << std::endl;
	std::cout << "The memory address held by stringPT		 : [" << &stringPTR << "]" << std::endl;
	std::cout << "The memory address held by stringREF		 : [" << &stringREF << "]" << std::endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "The value of the string variable 		 : [" << str << "]" << std::endl;
	std::cout << "The value pointed to by stringPTR		 : [" << stringPTR << "]" << std::endl;
	std::cout << "The value pointed to by stringREF		 : [" << stringREF << "]" << std::endl;
	return (0);
}
