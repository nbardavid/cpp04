/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:42:53 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 14:05:52 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.Class.hpp"
#include "../include/colors.h"
#include <iostream>

Ice::Ice(){
	std::cout << GREEN << "Ice default constructor has been called" << RESET << std::endl;
}

Ice::Ice(const Ice& other){
	std::cout << GREEN << "Ice copy constructor has been called" << RESET << std::endl;
	//A faire
}

Ice::~Ice(){
	std::cout << RED << "Ice destructor has been called" << RESET << std::endl;
}

Ice& Ice::operator=(const Ice& other){
	if (this != &other){
		//A faire
	}
    return *this;
}

void Ice::use(ICharacter& target){
	std::cout << BLUE << "* shoot an ice ball at " << target.getName() << " *" <<  RESET << std::endl;
}

AMateria* Ice::clone() const{
	AMateria* i = new Ice;
	Ice 
	return ();
}
