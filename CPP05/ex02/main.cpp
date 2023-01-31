#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		*chuck = new Bureaucrat( "chuck", 1 );
	Bureaucrat		*filou = new Bureaucrat( "filou", 40 );
	Bureaucrat		*gomar = new Bureaucrat( "gomar", 150 );

	std::cout << std::endl;

	form = new PresidentialPardonForm( "28A" );
	
	try {
		form->beSigned( *gomar );
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		chuck->executeForm( *form );
	}
	catch( std::exception& e ) {
		( void )e;
	}
	delete form;
	form = NULL;

	std::cout << std::endl;

	form = new PresidentialPardonForm( "28B" );
	form->beSigned( *chuck );
	chuck->executeForm( *form );
	delete form;
	form = NULL;

	std::cout << std::endl;

	form = new RobotomyRequestForm( "28C" );

	std::cout << *form << std::endl;

	form->beSigned( *chuck );
	chuck->executeForm( *form );

	try {
		gomar->executeForm( *form );
	}
	catch( std::exception& e ) {
		( void )e;
	}

	filou->executeForm( *form );
	filou->executeForm( *form );
	filou->executeForm( *form );
	filou->executeForm( *form );
	filou->executeForm( *form );
	filou->executeForm( *form );
	filou->executeForm( *form );

	delete form;
	form = NULL;

	std::cout << std::endl;

	form = new ShrubberyCreationForm( "29A" );
	
	std::cout << *form << std::endl;

	form->beSigned( *chuck );
	
	try {
		gomar->executeForm( *form );
	}
	catch ( std::exception& e ) {
		( void )e;
	}
	filou->executeForm( *form );
	delete form;
	form = NULL;

	std::cout << std::endl;

	delete chuck;
	delete filou;
	delete gomar;

	return 0;
}
