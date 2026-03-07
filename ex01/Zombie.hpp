/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:13:58 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:14:01 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce() const;
};

