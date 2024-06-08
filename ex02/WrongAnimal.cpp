#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Standart"){
	return;
}

WrongAnimal::~WrongAnimal()
{
	return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	*this = other;
	return;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	return;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Sound of WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}