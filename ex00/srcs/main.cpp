/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbardavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:00:11 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/02 13:55:46 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.Class.hpp"
#include "../include/Cat.Class.hpp"
#include "../include/Dog.Class.hpp"
#include "../include/colors.h"

int	main (){
	Cat cat;
	Dog dog;

	cat.makeSound();
	dog.makeSound();

	std::cout << std::endl << BLUE << "===================" << std::endl << std::endl << RESET;
	Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //cat
	j->makeSound();
	meta->makeSound();
	return (0);
}
