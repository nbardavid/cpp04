/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:50:29 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/05 10:58:57 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP

#include "ICharacter.Class.hpp"
#include "AMateria.Class.hpp"

class Ice:public AMateria {
public:
    Ice();
    Ice(const Ice& other);
    ~Ice();
    Ice& operator=(const Ice& other);
	void use(ICharacter& target);
    AMateria* clone() const;
	std::string const & getType() const;
};

#endif
