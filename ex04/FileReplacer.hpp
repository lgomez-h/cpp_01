/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <lgomez-h@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:40:52 by lgomez-h          #+#    #+#             */
/*   Updated: 2025/05/01 14:41:02 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class FileReplacer {
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

public:
    FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
    bool replace();
};
