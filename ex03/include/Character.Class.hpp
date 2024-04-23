/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:26:36 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/23 13:56:28 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP

#include "AMateria.Class.hpp"
#include "ICharacter.Class.hpp"

class Character:public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(const Character& other);
    ~Character();
    Character& operator=(const Character& other);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
	std::string getName();
private:
	AMateria* _inventory[4];
	std::string _name;
};

#endif
