

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog constructor" << std::endl;
	this->brain = new Brain();
	return;
}

Dog::~Dog()
{
	std::cout << "Cat deconstructor" << std::endl;
	delete this->brain;
	return ;
}

Dog::Dog(Dog const & other):Animal(other){
	std::cout << "Dog copy constructor" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(Dog const & other){
	std::cout << "Dog assignment operator" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "woof woof woof" << std::endl;
}

std::string* Dog::getIdeas() const
{
	return this->brain->getIdeas();
}