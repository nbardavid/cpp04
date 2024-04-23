/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:59:21 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/23 14:07:27 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include "IMateriaSource.Class.hpp"
#include "AMateria.Class.hpp"

class MateriaSource:public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& other);
	void learnMateria(AMateria *m);
	AMateria * createMateria(const std::string &type);
private:
	AMateria *_inventory[4];
};

#endif
