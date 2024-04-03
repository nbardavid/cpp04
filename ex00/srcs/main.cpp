/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:00:11 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 13:32:12 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.Class.hpp"
#include "../include/WrongAnimal.Class.hpp"
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
	std::cout << std::endl << BLUE << "===================" << std::endl << std::endl << RESET;
	
	WrongAnimal meta2;
	WrongCat wrong_cat;

	wrong_cat.makeSound();
	meta2.makeSound();
	std::cout << std::endl;
	const WrongAnimal* k = new WrongCat();
	k->makeSound();
	std::cout << std::endl;

	delete k;
	delete i;
	delete j;
	delete meta;

	return (0);
}
