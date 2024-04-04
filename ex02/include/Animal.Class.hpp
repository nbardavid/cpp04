/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:19 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 10:10:31 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class Animal {
public:
    Animal();
	Animal( std::string type );
    Animal(const Animal& other);
    virtual ~Animal();
    Animal& operator=(const Animal& other);
	std::string getType() const;
	void setType( std::string );
	virtual void makeSound() const = 0;
private:
	std::string type;
};

#endif
