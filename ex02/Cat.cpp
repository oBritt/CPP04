

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat constructor" << std::endl;
	this->brain = new Brain();
	return;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor" << std::endl;
	delete this->brain;
	return ;
}

Cat::Cat(Cat const & other):Animal(other){
	std::cout << "Cat copy constructor" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(Cat const & other){
	std::cout << "Cat assignment operator" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}

std::string *Cat::getIdeas(void) const
{
	return (this->brain->getIdeas());
}
