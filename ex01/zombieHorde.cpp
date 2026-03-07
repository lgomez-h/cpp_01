/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:15:00 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:15:07 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }

    return horde;
}

