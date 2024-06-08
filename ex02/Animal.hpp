
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

protected:
	std::string type;

public:
	Animal();
	virtual ~Animal() = 0;
	Animal& operator=(Animal const & other);
	Animal(Animal const & other);
	Animal(std::string type);
	virtual void makeSound() const = 0;
	virtual std::string getType(void) const;
};


#endif