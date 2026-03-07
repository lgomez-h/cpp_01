/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:41:22 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:41:27 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <fstream>
#include <iostream>

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

bool FileReplacer::replace() {
    if (_s1.empty()) {
        std::cerr << "Error: s1 (string to replace) cannot be empty." << std::endl;
        return false;
    }
    std::ifstream inFile(_filename.c_str());
    if (!inFile) {
        std::cerr << "Error: can't open file " << _filename << std::endl;
        return false;
    }

    std::ofstream outFile((_filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: can't create output file" << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
            pos += _s2.length(); // Avanzamos después del nuevo texto
        }
        outFile << line << '\n';
    }

    return true;
}

