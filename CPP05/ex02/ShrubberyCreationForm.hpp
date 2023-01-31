#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & other );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const & other );

	std::string	getTarget( void ) const;
	virtual void	execute( Bureaucrat const & src ) const;

private:
	std::string	_target;

};

#endif
