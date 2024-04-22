/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:09:00 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/22 16:12:05 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include "ICharacter.Class.hpp"

class AMateria {
public:
    AMateria();
	AMateria(std::string const & type);
    AMateria(const AMateria& other);
    virtual ~AMateria();
    AMateria& operator=(const AMateria& other);

	virtual std::string const & getType() const = 0;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string _type;
};

#endif
