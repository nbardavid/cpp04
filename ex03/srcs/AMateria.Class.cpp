/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:11:55 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 11:14:06 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.Class.hpp"
#include "../include/colors.h"

#include <iostream>

AMateria::AMateria():_type("default"){
	std::cout << GREEN << "AMateria default constructor has been called" << RESET << std::endl;
}

AMateria::AMateria(std::string const & type):_type(type){
	std::cout << GREEN << "AMateria constructor has been called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& other):_type(other.getType()){
	std::cout << GREEN << "AMateria copy constructor has been called" << RESET << std::endl;
}

AMateria::~AMateria(){
	std::cout << RED << "AMateria destructor has been called" << RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other){
	if (this != &other){
		this->_type = other.getType();
	}
    return *this;
}
