#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main( void ) {
	
	Animal*	animals[8];
	Brain*	brain;

	for ( int i = 0; i < 8; i++ ) {
		if ( i < 8 / 2 )
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	std::cout << std::endl;

	brain = animals[7]->getBrain();
	brain->ideas[0] = "Mmmkayyy?";
	brain->ideas[1] = "Is that a dying Giraffe?";
	brain->ideas[2] = "We have to save Terrence and Phillip!";
	brain->ideas[3] = "Fuck off.";
	std::cout << animals[7]->getBrain()->ideas[1] << std::endl;

	std::cout << std::endl;

	animals[3]->makeSound();
	animals[6]->makeSound();
	std::cout << "Type [2]: " << animals[2]->getType() << std::endl;

	std::cout << std::endl;

	*( animals[5] ) = *( animals[7] );

	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	delete animals[7];

	std::cout << animals[5]->getBrain()->ideas[2] << std::endl << std::endl;

	for ( int i = 0; i < 7; i++ ) {
		delete animals[i];
	}
	return 0;
}
