/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:26:41 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 13:58:12 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.Class.hpp"

Character::Character():_name("default"){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name):_name(name){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
}

Character::Character(const Character& other):_name(other.getName()){
	
}

Character::~Character(){
	
}

Character& Character::operator=(const Character& other){
    return *this;
}


