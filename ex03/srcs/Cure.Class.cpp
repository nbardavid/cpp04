/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:49:03 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/22 15:41:37 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.Class.hpp"
#include "../include/colors.h"
#include <iostream>

Cure::Cure(): AMateria("cure"){
	std::cout << GREEN << "Cure default constructor has been called" << RESET << std::endl;
}

Cure::Cure(const Cure& other): AMateria("cure"){
	*this = other;
	std::cout << GREEN << "Cure copy constructor has been called" << RESET << std::endl;
}

Cure::~Cure(){
	std::cout << RED << "Cure destructor has been called" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure& other){
	if (this != &other){
		this->_type = other.getType();
	}
    return *this;
}

void Cure::use(ICharacter& target){
	std::cout << BLUE << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
}
