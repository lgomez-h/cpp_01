/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:31:23 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:31:32 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon {
private:
    std::string _type;

public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& newType);
};
