/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:30 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 13:26:19 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.Class.hpp"
#include "../include/colors.h"

// ************************************************
// *                 Constructors                 *
// ************************************************

WrongAnimal::WrongAnimal():type("default"){
	std::cout << GREEN << "WrongAnimal as been created with type: default" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type){
	std::cout << GREEN << "WrongAnimal as been created with type: " << type << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other):type(other.type){
	std::cout << GREEN << "WrongAnimal as been copied with type: " << type << RESET << std::endl;
}


WrongAnimal::~WrongAnimal(){
	std::cout << RED << "WrongAnimal as been destroyed" << RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	if  (this != &other){
		this->setType(other.getType());
	}
    return *this;
}

// ************************************************
// *                   set/get                    *
// ************************************************

void WrongAnimal::setType( std::string type ){
	this->type = type;
}

std::string WrongAnimal::getType( void ) const{
	return(this->type);
}

// ************************************************
// *                  Functions                   *
// ************************************************

void WrongAnimal::makeSound()const {
	std::cout << BLUE << "makeSound by default" << RESET << std::endl;
}

