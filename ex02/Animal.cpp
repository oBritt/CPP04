
#include "Animal.hpp"

Animal::Animal(): type("Standart"){
	return;
}

Animal::~Animal()
{
	return;
}

Animal& Animal::operator=(Animal const & other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::Animal(Animal const & other)
{
	*this = other;
	return;
}

Animal::Animal(std::string type): type(type)
{
	return;
}

std::string Animal::getType(void) const
{
	return this->type;
}