#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include <stdexcept>

# include "Form.hpp"

class	Bureaucrat {

private:
		std::string	_name;
		int		_grade;

public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & other );
		virtual ~Bureaucrat( void );

		Bureaucrat&	operator=( Bureaucrat const & other );

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too high. Bureaucrat can't rise in rank.");
				}
		};

		class	GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low. Bureaucrat can't be downgraded.");
				}
		};

		class	BadGradeException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Wrong grade. Default grade required.");
				}
		};

		std::string	getName( void ) const;
		int		getGrade( void ) const;

		void		gradeIncrement( void );
		void		gradeDecrement( void );
		void		signForm( class Form const & form ) const;
};

std::ostream	&operator<<( std::ostream &out, const Bureaucrat & src );

#endif
