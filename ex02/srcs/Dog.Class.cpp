/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:51:10 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 09:49:04 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.Class.hpp"
#include "../include/colors.h"

// ************************************************
// *                 Constructors                 *
// ************************************************

Dog::Dog():Animal("Dog"), _brain(new Brain()){
	std::cout << GREEN << "Dog as been created" << RESET << std::endl;
}

Dog::Dog(const Dog& other):Animal("Dog"){
	this->_brain = other._brain;
	std::cout << GREEN << "Dog as been copied" << RESET << std::endl;
}


Dog::~Dog(){
	delete _brain;
	std::cout << RED << "Dog has been Destroyed" << RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

Dog& Dog::operator=(const Dog& other){
	if (this != &other)
		Animal::operator=(other);
    return *this;
}

// ************************************************
// *                  Functions                   *
// ************************************************

void Dog::makeSound() const{
	std::cout << BLUE << "Woof! " << RESET << std::endl;
}

