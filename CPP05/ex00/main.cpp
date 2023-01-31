#include "Bureaucrat.hpp"

int	main( void ) {
	
	Bureaucrat*	chuck = new Bureaucrat( "chuck", 1 );
	Bureaucrat*	filou = new Bureaucrat( "filou", 150 );
	Bureaucrat*	Random = new Bureaucrat();
	Bureaucrat*	error = new Bureaucrat( "too low", 180 );
	Bureaucrat*	_error = new Bureaucrat( "too high", 0 );

	std::cout << std::endl << *Random << std::endl;
	std::cout << *error << std::endl;
	std::cout << *_error << std::endl;

	std::cout << std::endl;

	try {
		chuck->gradeIncrement();
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *chuck << std::endl;
	try {
		chuck->gradeDecrement();
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *chuck << std::endl;

	std::cout << std::endl;

	try {
		filou->gradeDecrement();
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *filou << std::endl;
	try {
		filou->gradeIncrement();
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *filou << std::endl << std::endl;
	
	delete chuck;
	delete filou;
	delete Random;
	delete error;
	delete _error;

	return 0;
}