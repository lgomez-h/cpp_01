/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:49:56 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:50:00 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
    std::cout << "DEBUG: I love having extra bacon..." << std::endl;
}

void Harl::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money..." << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free..." << std::endl;
}

void Harl::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    typedef void (Harl::*HarlFunc)();
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc funcs[4] = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Harl doesn't know how to complain at that level." << std::endl;
}

