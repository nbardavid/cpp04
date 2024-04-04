/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:50:29 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/04 14:03:31 by nbardavi         ###   ########.fr       */
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
    virtual AMateria* clone() const;
};

#endif
