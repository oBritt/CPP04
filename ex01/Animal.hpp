
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	virtual Animal& operator=(Animal const & other);
	Animal(Animal const & other);
	Animal(std::string type);
	virtual void makeSound() const;
	std::string getType(void) const;
};


#endif