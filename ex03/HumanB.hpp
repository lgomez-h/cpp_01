/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:33:25 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:33:30 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;
};
