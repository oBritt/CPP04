

#include "Character.hpp"

Character::Character()
{
    this->name = "Default";
    std::cout << "Char is born" << std::endl;
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
    std::cout << "Char is dead" << std::endl;
}

Character::Character(std::string name)
{
    this->name = name;
}

Character& Character::operator=(Character const& other)
{
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
        }

        for (int i = 0; i < 4; i++)
        {
            if ((other.inventory)[i])
                (this->inventory)[i] = (other.inventory[i])->clone();
        }
    }
    std::cout << "assingment Char" << std::endl;
    return *this;
}

Character::Character(Character const & other)
{
    for (int i = 0; i < 4; i++)
    {
        if ((other.inventory)[i])
            (this->inventory)[i] = (other.inventory[i])->clone();
    }
    this->name = other.name;
    std::cout << "copy constructor Char" << std::endl;
}

std::string const & Character::getName() const{
    return (this->name);
}

void Character::equip(AMateria* m){
    if (m == NULL)
    {
        std::cout << "Materia is NULL" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!((this->inventory)[i]))
        {
            this->inventory[i] = m;
            std::cout << m->getType() << " was equiped at index " << i << std::endl;
            return ;
        }
    }
    std::cout << "Wasnt equiped" << std::endl; 
}

void Character::unequip(int idx)
 {
    if (idx < 0 || idx > 3)
    {
        std::cout << "outside of range" << std::endl;
        return ;
    }
    if (!((this->inventory)[idx]))
    {
        std::cout << "Not set" << std::endl;
    }
    else
    {
        AMateria *ptr = (this->inventory)[idx];
        std::cout << "The materia " << ptr->getType() << " was unset" << std::endl;
        (this->inventory)[idx] = NULL;
    }
 }

 void   Character::use(int idx, ICharacter& target)
 {
    if (idx < 0 || idx > 3)
    {
        std::cout << "outside of range" << std::endl;
        return ;
    }
    if (!((this->inventory)[idx]))
    {
        std::cout << "That slot is unequiped" << std::endl;
        return ;
    }
    ((this->inventory)[idx])->use(target);
 }