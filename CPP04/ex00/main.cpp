#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); 
    	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;

	const	WrongAnimal *test = new WrongAnimal();
	const	WrongAnimal *beta = new WrongCat();

	std::cout << std::endl;
	
	std::cout << test->getType() << std::endl;
	std::cout << beta->getType() << std::endl;

	test->makeSound();
	beta->makeSound();

	std::cout << std::endl;

	delete test;
	delete beta;

	return 0;
}
