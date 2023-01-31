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
		if ( grade > 150 || grade < 1 )
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
	this->_name = other.getName();
	this->_grade = other.getGrade();
	return *this;
}

std::string	Bureaucrat::getName( void ) const {
	return this->_name;
}

int		Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void		Bureaucrat::gradeIncrement( void ) {
	if ( this->_grade == 1 )
		throw Bureaucrat::gradeTooHighException();
	else {
		std::cout << "Bureaucrat " << this->_name << " rose in rank!" << std::endl;
		this->_grade--;
	}
	return ;
}

void		Bureaucrat::gradeDecrement( void ) {
	if ( this->_grade == 150 )
		throw Bureaucrat::gradeTooLowException();
	else {
		std::cout << "Bureaucrat " << this->_name << " is demoted..." << std::endl;
		this->_grade++;
	}
	return ;
}

void		Bureaucrat::signForm( class Form const & form ) const {
	std::cout << this->_name;
	if ( form.getSign() == true )
		std::cout << " signed " << form.getName() << "." << std::endl;
	else
		std::cout << " couldn't sign " << form.getName() << " because his grade is too low..." << std::endl;
	return ;
}

void		Bureaucrat::executeForm( class Form const & form ) const {
	if ( form.getSign() == false || this->getGrade() > form.getToRun() ) {
		std::cout << "This Form can't be executed because it's not signed or because ";
		std::cout << this->getName() << " can't execute it." << std::endl;
	}
	else {
		form.execute( *this );
		std::cout << this->_name << " execute form " << form.getName() << std::endl;
	}
	return ;
}

std::ostream	&operator<<( std::ostream &out, const Bureaucrat & src ) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
