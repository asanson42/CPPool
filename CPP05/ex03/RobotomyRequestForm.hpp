#ifndef ROBOTYREQUESTFORM_H
# define ROBOTYREQUESTFORM_H

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & other );
	~RobotomyRequestForm( void );

	RobotomyRequestForm	&operator=( RobotomyRequestForm const & other );

	std::string		getTarget( void ) const;
	virtual void		execute( Bureaucrat const & src ) const;

private:
	std::string	_target;
};

#endif
