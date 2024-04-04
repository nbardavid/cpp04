#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP

class MateriaSource {
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& other);
};

#endif