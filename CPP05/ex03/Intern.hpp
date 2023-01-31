#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {

public:
	Intern( void );
	Intern( Intern const & other );
	virtual ~Intern( void );

	Intern&	operator=( Intern const & other );

	Form*	makeForm( std::string name, std::string target ) const;

	class	noFormException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Intern can't find this form.");
			}
	};

private:
	Form*	_createForm( std::string name, std::string target, int form ) const;

};

#endif
