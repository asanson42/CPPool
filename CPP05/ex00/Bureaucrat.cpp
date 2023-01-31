#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {
	std::cout << "Bureaucrat default constructor called." << std::endl;
	this->_name = "Random";
	this->_grade = 150;
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) {
	std::cout << "Parametric constructor try to create Bureaucrate [" << name << "] graded: " << grade << std::endl;
	this->_name = name;
	try {
		if (grade < 1 || grade > 150)
			throw Bureaucrat::BadGradeException();
		else
			this->_grade = grade;
	}
	catch ( std::exception& e ) {
		std::cout << e.what() << std::endl;
		if ( grade > 150 )
			this->_grade = 150;
		else
			this->_grade = 1;
	}	
}

Bureaucrat::Bureaucrat( Bureaucrat const & other ) {
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = other;
	return ;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destructor called." << std::endl;
	return ;
}

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const & other ) {
	std::cout << "Bureaucrat assignement operator called." << std::endl;
	this->_name = other._name;
	this->_grade = other._grade;
	return *this;
}

std::string	Bureaucrat::getName( void ) const {
	return this->_name;
}

int		Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void		Bureaucrat::gradeIncrement( void ) {

	std::cout << "Bureaucrat [" << this->_name << "] try to rise in rank." << std::endl;
	if ( this->_grade == 1 )
		throw Bureaucrat::GradeTooHighException();
	else {
		std::cout << "Bureaucrat " << this->_name << " rose in rank!" << std::endl;
		this->_grade--;
	}
	return ;
}

void		Bureaucrat::gradeDecrement( void ) {
	
	std::cout << "Bureaucrat [" << this->_name << "] must be downgraded." << std::endl;
	if ( this->_grade == 150 )
		throw Bureaucrat::GradeTooLowException();
	else {
		std::cout << "Bureaucrat " << this->_name << " has been downgraded..." << std::endl;
		this->_grade++;
	}
	
	return ;
}

std::ostream	&operator<<( std::ostream &out, const Bureaucrat & other ) {
	out << other.getName() << ", bureaucrat grade " << other.getGrade();
	return out;
}
