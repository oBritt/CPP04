
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{

protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const & other);
	WrongAnimal(WrongAnimal const & other);
	WrongAnimal(std::string type);
	void makeSound() const;
	std::string getType(void) const;
};


#endif