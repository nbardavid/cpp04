/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:00:11 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 10:03:39 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.Class.hpp"
#include "../include/WrongAnimal.Class.hpp"
#include "../include/Animal.Class.hpp"
#include "../include/Cat.Class.hpp"
#include "../include/Dog.Class.hpp"
#include "../include/colors.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal* k[10];
	for (int i = 0; i < 5; i++){
		k[i] = new Dog();
	}
	for (int i = 5; i < 10; i++){
		k[i] = new Cat();
	}
	for (int i = 0; i < 10; i++){
		delete k[i];
	}
	return 0;
}
