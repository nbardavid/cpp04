/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:02 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 10:15:19 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include "WrongAnimal.Class.hpp"

class WrongCat: public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    ~WrongCat();
    WrongCat& operator=(const WrongCat& other);
	void makeSound() const;
};


#endif
