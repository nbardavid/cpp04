/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:44:52 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/02 13:47:06 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.Class.hpp"
#include "../include/colors.h"

// ************************************************
// *                 Constructors                 *
// ************************************************

Animal::Animal():type("default"){
	std::cout << GREEN << "Animal as been created with type: default" << RESET << std::endl;
}

Animal::Animal(std::string type):type(type){
	std::cout << GREEN << "Animal as been created with type: " << type << RESET << std::endl;
}

Animal::Animal(const Animal& other):type(other.type){
	std::cout << GREEN << "Animal as been copied with type: " << type << RESET << std::endl;
}


Animal::~Animal(){
	std::cout << RED << "Animal as been destroyed" << RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

Animal& Animal::operator=(const Animal& other){
	if  (this != &other){
		this->setType(other.getType());
	}
    return *this;
}

// ************************************************
// *                   set/get                    *
// ************************************************

void Animal::setType( std::string type ){
	this->type = type;
}

std::string Animal::getType( void ) const{
	return(this->type);
}

// ************************************************
// *                  Functions                   *
// ************************************************

void Animal::makeSound()const {
	std::cout << BLUE << "makeSound by default" << RESET << std::endl;
}

