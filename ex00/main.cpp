/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:56:48 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 13:56:56 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("Heapster");
    heapZombie->announce();
    delete heapZombie;

    randomChump("Stacky");

    return 0;
}

