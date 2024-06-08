

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource{
    
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource& operator=(MateriaSource const & other);
        
        void learnMateria(AMateria* ptr);
        AMateria* createMateria(std::string const & type);

    private:
		AMateria *(inventory[4]);
};


#endif