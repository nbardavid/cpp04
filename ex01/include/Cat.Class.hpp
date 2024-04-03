/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:10:46 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/02 13:39:05 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.Class.hpp"

class Cat: public Animal {
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();
    Cat& operator=(const Cat& other);
	void makeSound() const;
};

#endif
