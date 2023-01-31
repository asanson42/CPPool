#include "Form.hpp"

Form::Form( void ) {
	std::cout << "Default Form constructor called." << std::endl;
	this->_name = "default";
	this->_sign = false;
	this->_gradeToSign = 150;
	this->_gradeToRun = 150;
	return ;
}

Form::Form( std::string name, int sign, int run ) {
	this->_name = name;
	this->_sign = false;
	this->_gradeToSign = sign;
	this->_gradeToRun = run;
	std::cout << "Parametric constructor create : " <<  this->_name << " Form." << std::endl;
	return ;
}

Form::Form( Form const & other ) {
	std::cout << "Copy Form constructor called." << std::endl;
	*this = other;
	return ;
}

Form::~Form( void ) {
	std::cout << "Form destructor called." << std::endl;
	return ;
}

Form&	Form::operator=( Form const & other ) {
	std::cout << "Form assignement operator called." << std::endl;
	this->_name = other.getName();
	this->_sign = other.getSign();
	this->_gradeToSign = other.getToSign();
	this->_gradeToRun = other.getToRun();
	return *this;
}

std::string	Form::getName( void ) const {
	return this->_name;
}

bool		Form::getSign( void ) const {
	return this->_sign;
}

int		Form::getToSign( void ) const {
	return this->_gradeToSign;
}

int		Form::getToRun( void ) const {
	return this->_gradeToRun;
}

void		Form::beSigned( class Bureaucrat const & src ) {
	if ( src.getGrade() < this->_gradeToSign )
		this->_sign = true;
	src.signForm( *this );
	if ( src.getGrade() > this->_gradeToSign ) {
		throw Form::GradeTooLowException();
	}
	return ;
}

std::ostream	&operator<<( std::ostream &out, const Form & src ) {
	out << std::endl << "Form <" << src.getName() << "> need a " << src.getToSign();
	out << " grade to be signed, and a " << src.getToRun() << " grade to be executed." << std::endl;
	if ( src.getSign() == false )
		out << "This Form isn't signed.";
	else
		out << "This Form is signed.";
	return out;
}
