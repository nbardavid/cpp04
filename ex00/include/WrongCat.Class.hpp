/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbardavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:02 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/02 14:01:14 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.Class.hpp"

class Cat: public WrongAnimal {
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();
    Cat& operator=(const Cat& other);
	void makeSound() const;
};


#endif