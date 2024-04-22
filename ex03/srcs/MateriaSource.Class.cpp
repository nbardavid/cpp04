/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:59:22 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/22 16:08:30 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.Class.hpp"
#include "../include/colors.h"
#include <iostream>

MateriaSource::MateriaSource(){
    // Constructeur
}
MateriaSource::MateriaSource(const MateriaSource& other){
    // Constructeur de copie
}

MateriaSource::~MateriaSource(){
	std::cout << RED << "MateriaSource destructor has been called" << RESET << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
	if (this != &other) {
		// A faire
	}
    return *this;
}
