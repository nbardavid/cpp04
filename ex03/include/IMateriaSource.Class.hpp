#ifndef IMATERIASOURCE_CLASS_HPP
#define IMATERIASOURCE_CLASS_HPP

class IMateriaSource {
public:
    IMateriaSource();
    IMateriaSource(const IMateriaSource& other);
    ~IMateriaSource();
    IMateriaSource& operator=(const IMateriaSource& other);
};

#endif