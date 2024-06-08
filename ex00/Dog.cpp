

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	return;
}

Dog::~Dog()
{
	return ;
}

Dog::Dog(Dog const & other) : Animal(other){}

Dog& Dog::operator=(Dog const & other){
	this->type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "woof woof woof" << std::endl;
}