#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class	Form {

private:
	std::string		_name;
	bool			_sign;
	int		_gradeToSign;
	int		_gradeToRun;

public:
	Form( void );
	Form( std::string name, int sign, int run );
	Form( Form const & other );
	virtual ~Form( void );

	Form&	operator=( Form const & other );

	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("grade is too low.");
			}
	};

	std::string	getName( void ) const;
	bool		getSign( void ) const;
	int		getToSign( void ) const;
	int		getToRun( void ) const;

	void		beSigned( class Bureaucrat const & src );
};

std::ostream	&operator<<( std::ostream &out, const Form & src );

#endif
