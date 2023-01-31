#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Form( "PresidentialPardonForm", 25, 5 ), _target( "" ) {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Form( "PresidentialPardonForm", 25, 5), _target( target ) {
	std::cout << "Parametric PresidentialPardonForm constructor called for " << this->_target << "." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & other ) :
	Form( "PresidentialPardonForm", 25, 5 ), _target( other.getTarget() ) {
	std::cout << "Copy PresidentialPardonForm constructor called." << std::endl;
	*this = other;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & other ) {
	std::cout << "PresidentialPardonForm assignement operator called." << std::endl;
	this->_target = other.getTarget();
	return *this;
}

std::string	PresidentialPardonForm::getTarget( void ) const {
	return this->_target;
}

void		PresidentialPardonForm::execute( Bureaucrat const & src ) const {
	if ( this->getSign() == false || src.getGrade() > this->getToRun() )
		throw Form::gradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

	return ;
}
