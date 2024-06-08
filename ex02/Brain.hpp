
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
private:
	std::string *ideas;

public:
	Brain();
	~Brain();
	Brain& operator=(Brain const & other);
	Brain(Brain const& other);
	std::string *getIdeas(void);
};


#endif