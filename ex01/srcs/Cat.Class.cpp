/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:09:48 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/02 13:39:13 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.Class.hpp"
#include "../include/colors.h"

// ************************************************
// *                 Constructors                 *
// ************************************************

Cat::Cat():Animal("Cat"){
	std::cout << GREEN << "Cat as been created" << RESET << std::endl;
}

Cat::Cat(const Cat& other):Animal("Cat"){
	(void)other;
	std::cout << GREEN << "Cat as been copied" << RESET << std::endl;
}


Cat::~Cat(){
	std::cout << RED << "Cat has been Destroyed" << RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

Cat& Cat::operator=(const Cat& other){
	if (this != &other)
		Animal::operator=(other);
    return *this;
}

// ************************************************
// *                  Functions                   *
// ************************************************

void Cat::makeSound() const{
	std::cout << BLUE << "Meow! " << RESET << std::endl;
}
