

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	return;
}

Cat::~Cat()
{
	return ;
}

Cat::Cat(Cat const & other) : Animal(other){}

Cat& Cat::operator=(Cat const & other){
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}