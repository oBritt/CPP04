

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }


// int	main()
// {
// 	Cat const cat1;
// 	Cat const cat2(cat1);

// 	cat1.~Cat();
// 	std::string *strs = cat2.getIdeas();
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << strs[i] << std::endl;
// 	}

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
