#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & other );
	~PresidentialPardonForm( void );

	PresidentialPardonForm	&operator=( PresidentialPardonForm const & other );

	std::string	getTarget( void ) const;
	virtual void	execute( Bureaucrat const & src) const;

private:
	std::string	_target;
};

#endif
