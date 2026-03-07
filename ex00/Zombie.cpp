/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:54:39 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 13:55:00 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed." << std::endl;
}

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

