/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:14:23 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:14:31 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

