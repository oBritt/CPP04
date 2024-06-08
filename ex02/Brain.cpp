

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ("Idea number " + std::to_string(i));
	}
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor" << std::endl;
	delete [] this->ideas;
}

Brain& Brain::operator=(Brain const &other)
{
	std::cout << "Brain assignment operator" << std::endl;
	if (this != &other)
	{
		delete [] this->ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i <100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(Brain const & other)
{
	std::cout << "Brain copy constructor" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
}

std::string *Brain::getIdeas(void)
{
	return this->ideas;
}