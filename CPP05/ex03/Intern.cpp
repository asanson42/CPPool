#include "Intern.hpp"

Intern::Intern( void ) {
	std::cout << "Intern default constructor called." << std::endl;
	return ;
}

Intern::Intern( Intern const & other ) {
	std::cout << "Intern copy constructor called." << std::endl;
	*this = other;
	return ;
}

Intern::~Intern( void ) {
	std::cout << "Intern destructor called." << std::endl;
	return ;
}

Intern&		Intern::operator=( Intern const & other ) {
	std::cout << "Intern assignement operator called." << std::endl;
	( void )other;
	return *this;
}

Form*	Intern::_createForm( std::string name, std::string target, int form ) const {
	Form*	Form = NULL;
	if ( form == 0 ) {
		Form = new PresidentialPardonForm( target );
	}
	if ( form == 1 ) {
		Form = new RobotomyRequestForm( target );
	}
	if ( form == 2 ) {
		Form = new ShrubberyCreationForm( target );
	}
	std::cout << "Intern creates " << name << "." << std::endl;
	return Form;
}

Form*	Intern::makeForm( std::string name, std::string target ) const {
	std::string	compare[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	try {
		for ( int i = 0; i < 4; i++ ) {
			if ( i == 3 )
				throw Intern::noFormException();
			else if ( name == compare[i] )
				return this->_createForm( name, target, i );
		}
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
	}
	return NULL;
}
