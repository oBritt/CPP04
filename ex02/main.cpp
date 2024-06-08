

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"




// int	main()
// {
// 	//Animal animal;

// 	//const Animal* meta = new Animal;
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// }

int	main()
{
	Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animals[i];
}
