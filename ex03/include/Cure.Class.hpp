/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:50:25 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/23 13:10:35 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP

#include "ICharacter.Class.hpp"
#include "AMateria.Class.hpp"

class Cure:public AMateria {
public:
    Cure();
    Cure(const Cure& other);
    ~Cure();
    Cure& operator=(const Cure& other);
	void use(ICharacter& target);
    AMateria* clone() const;
	std::string const & getType() const;
};

#endif
