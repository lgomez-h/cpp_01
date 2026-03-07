/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:33:39 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:33:50 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() const {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}
