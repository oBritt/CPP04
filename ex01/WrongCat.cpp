

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	return;
}

WrongCat::~WrongCat()
{
	return ;
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other){}

WrongCat& WrongCat::operator=(WrongCat const & other){
	this->type = other.type;
	return (*this);
}

