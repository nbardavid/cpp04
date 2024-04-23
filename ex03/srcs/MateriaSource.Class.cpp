/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:59:22 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/23 14:10:30 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.Class.hpp"
#include "../include/colors.h"
#include <iostream>

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	} 	
}
MateriaSource::MateriaSource(const MateriaSource& other){
	for (int i = 0; i < 4; i++) {
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	} 	
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	} 	
	std::cout << RED << "MateriaSource destructor has been called" << RESET << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
	if (this != &other){
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i])
					delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	int i = 0;
	
	if (!m){
		std::cerr << RED << "Materia to equip is null" << RESET << std::endl;
		return;
	}
	while (this->_inventory[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cerr << RED << "Can't learn more than 4 Materia" << RESET << std::endl;
		return ;
	}
	this->_inventory[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria *MateriaSource::createMateria(const std::string &type){
	int i = 0;
	
	while (i < 4 && this->_inventory[i] && this->_inventory[i]->getType() != type){
		i++;
	}
	if (i == 4 || !this->_inventory[i]){
		std::cerr << RED << "There is no materia with this type" << RESET << std::endl;
		return (NULL);
	}
	return (this->_inventory[i]->clone());
}
