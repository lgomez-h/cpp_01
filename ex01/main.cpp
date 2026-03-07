/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:15:29 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:15:34 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int cantidad = 5;
    Zombie* horda = zombieHorde(cantidad, "Walker");

    if (!horda)
        return 1;

    for (int i = 0; i < cantidad; ++i) {
        horda[i].announce();
    }

    delete[] horda;
    return 0;
}
