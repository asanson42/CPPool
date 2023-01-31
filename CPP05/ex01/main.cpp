#include "Bureaucrat.hpp"

int	main( void ) {
	
	Bureaucrat*	chuck = new Bureaucrat( "chuck", 1 );
	Bureaucrat*	filou = new Bureaucrat( "filou", 150 );

	Form*		form1 = new Form( "enter", 150, 1 );
	Form*		form2 = new Form( "exit", 1, 1 );
	
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;

	std::cout << std::endl;

	try {
		form1->beSigned( *chuck );
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		form2->beSigned( *filou );
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;

	std::cout << std::endl;

	delete form1;
	delete form2;
	delete filou;
	delete chuck;

	return 0;
}
