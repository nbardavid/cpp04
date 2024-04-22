/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:59:21 by nbardavi          #+#    #+#             */
/*   Updated: 2024/04/22 16:06:41 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

#include "./IMateriaSource.Class.hpp"

class MateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& other);
};

#endif
