/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:38:14 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 10:07:59 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.Class.hpp"
#include <iostream>

Brain::Brain(){
    for(int i = 0; i < 100; ++i) {
        this->_ideas[i] = "";
	}
}

Brain::Brain(const Brain& other){
    for(int i = 0; i < 100; ++i) {
        this->_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain(){
}

Brain& Brain::operator=(const Brain& other){
	if (this != &other)
        for(int i = 0; i < 100; ++i) {
            this->_ideas[i] = other._ideas[i];
        }
    return *this;
}

