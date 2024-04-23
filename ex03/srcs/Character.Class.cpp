/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:26:41 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/23 14:08:49 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.Class.hpp"
#include "../include/colors.h"
#include <iostream>

int space = 0;

Character::Character():_name("default"){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
	std::cout << GREEN << "Character default constructor has been called" << RESET << std::endl;
}

Character::Character(std::string name):_name(name){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
}

Character::Character(const Character& other):_name(other.getName()){
	for (int i = 0; i < 4; i++){
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	}
	std::cout << GREEN << "Character copy constructor has been called" << RESET << std::endl;
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << RED << "Character destructor has been called" << RESET << std::endl;
}

Character& Character::operator=(const Character& other){
	if (this != &other){
		this->_name = other.getName();
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i])
					delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
    return *this;
}

void Character::equip(AMateria* m){
	if (!m){
		std::cerr << RED << "Materia to equip is null" << RESET << std::endl;
		return;
	}
	if (space < 4){
		for (int i = 0; i < 4; i++){
			if (this->_inventory[i] == NULL){
				this->_inventory[i] = m;
				space++;
				break;
			}
		}
	}
	else {
		std::cerr << RED << "No space left in the inventory" << RESET << std::endl;
	}
}

void Character::unequip(int idx){
	if (idx >= 0 && idx <= 3){
		if (this->_inventory[idx]) {
			delete this->_inventory[idx];
			this->_inventory[idx] = NULL;
		}
	}
	else {
		std::cerr << RED << "Wrong index" << RESET << std::endl;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3){
		std::cerr << RED << "Wrong index" << RESET << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL){
		std::cerr << RED << "No object at index: " << idx << RESET << std::endl;
		return;
	}
	else{
		this->_inventory[idx]->use(target);
	}
}

std::string const & Character::getName() const{
	return (this->_name);
}
