

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "Abstract materia has beed constructed\n";
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has beed destroyed\n";
}

AMateria::AMateria(AMateria const & ref) : type(ref.type)
{
	std::cout << "Abstract materia has beed constructed from a copy\n";
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}