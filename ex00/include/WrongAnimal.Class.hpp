/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:58:06 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/03 10:17:34 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <string>
#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();
	WrongAnimal( std::string type );
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& other);
	std::string getType() const;
	void setType( std::string );
	void makeSound() const;
private:
	std::string type;
};

#endif
