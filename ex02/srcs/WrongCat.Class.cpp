/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:28 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 13:24:44 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.Class.hpp"
#include "../include/colors.h"

// ************************************************
// *                 Constructors                 *
// ************************************************

WrongCat::WrongCat():WrongAnimal("WrongCat"){
	std::cout << GREEN << "WrongCat as been created" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal("WrongCat"){
	(void)other;
	std::cout << GREEN << "WrongCat as been copied" << RESET << std::endl;
}


WrongCat::~WrongCat(){
	std::cout << RED << "WrongCat has been Destroyed" << RESET << std::endl;
}

// ************************************************
// *                  Operators                   *
// ************************************************

WrongCat& WrongCat::operator=(const WrongCat& other){
	if (this != &other)
		WrongAnimal::operator=(other);
    return *this;
}

// ************************************************
// *                  Functions                   *
// ************************************************

void WrongCat::makeSound() const{
	std::cout << BLUE << "Woof! " << RESET << std::endl;
}
