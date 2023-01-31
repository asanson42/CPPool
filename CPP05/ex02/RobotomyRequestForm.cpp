#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Form( "RobotomyRequestForm", 72, 45 ), _target( "" ) {
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form( "RobotomyRequestForm", 72, 45 ), _target( target ) {
	std::cout << "Parametric RobotomyRequestForm constructor called for " << this->_target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & other ) :
	Form( "RobotomyRequestForm", 72, 45 ), _target( other.getTarget() ) {
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = other;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & other ) {
	std::cout << "RobotomyRequestForm assignement operator called." << std::endl;
	this->_target = other.getTarget();
	return *this;
}

std::string	RobotomyRequestForm::getTarget( void ) const {
	return this->_target;
}

void	RobotomyRequestForm::execute( Bureaucrat const & src ) const {
	if ( this->getSign() == false || src.getGrade() > this->getToRun() )
		throw Form::gradeTooLowException();
	else {
		std::cout << "* Drilling noises *" << std::endl;
		if ( std::rand() % 2 )
			std::cout << this->_target << " has been succesfully robotomized." << std::endl;
		else
			std::cout << this->_target << " robotomization failed." << std::endl;
	}
	
	return ;
}
