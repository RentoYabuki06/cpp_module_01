/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryabuki <ryabuki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:25:19 by yabukirento       #+#    #+#             */
/*   Updated: 2025/05/04 10:08:57 by ryabuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main() {
    Harl harl;

    std::cout << "[TEST] DEBUG level:\n";
    harl.complain("DEBUG");

    std::cout << "\n[TEST] INFO level:\n";
    harl.complain("INFO");

    std::cout << "\n[TEST] WARNING level:\n";
    harl.complain("WARNING");

    std::cout << "\n[TEST] ERROR level:\n";
    harl.complain("ERROR");

    std::cout << "\n[TEST] Unknown level:\n";
    harl.complain("RANDOM");

    return 0;
}
