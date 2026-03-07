/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:54:52 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:54:59 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int getLevelIndex(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    int level = getLevelIndex(argv[1]);

    switch (level) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            break;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            break;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            break;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            std::cout << "Although there are several ways to deal with Harl, one of the most effective is to SWITCH it off." << std::endl;
    }

    return 0;
}

