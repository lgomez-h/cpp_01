/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:32:35 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:32:43 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};
