/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:42:02 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:42:08 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileReplacer.hpp"

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    FileReplacer replacer(argv[1], argv[2], argv[3]);
    if (!replacer.replace()) {
        return 1;
    }

    return 0;
}
