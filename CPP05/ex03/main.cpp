#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void ) {
	
	Form		*form = NULL;
	Bureaucrat	*chuck = new Bureaucrat( "chuck", 1 );
	Intern		*slave = new Intern();

	std::cout << std::endl;

	form = slave->makeForm( "none", "none" );
	delete form;
	form = NULL;

	std::cout << std::endl;

	form = slave->makeForm( "PresidentialPardonForm", "slave" );
	form->beSigned( *chuck );
	form->execute( *chuck );

	delete form;
	form = NULL;

	std::cout << std::endl;

	form = slave->makeForm( "ShrubberyCreationForm", "garden" );
	form->beSigned( *chuck );
	form->execute( *chuck );

	delete form;
	form = NULL;

	std::cout << std::endl;

	form = slave->makeForm( "error", "error" );

	delete form;
	delete chuck;
	delete slave;

	return 0;
}
