#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default Dog constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog( Dog const & other ) {
	std::cout << "Copy Dog constructor called." << std::endl;
	*this = other;
	return ;
}

Dog::~Dog( void ) {
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

Dog	&Dog::operator=( Dog const & other ) {
	std::cout << "Dog assignement operator called." << std::endl;
	this->_type = other.getType();
	*( this->_brain ) = *( other.getBrain() );
	return *this;
}

Animal	&Dog::operator=( Animal const & other ) {
	std::cout << "Animal assignement operator called. [Dog]" << std::endl;
	this->_type = other.getType();
	*( this->_brain ) = *( other.getBrain() );
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "WOUUUUAF! WOUAAAAF!" << std::endl;
	return ;
}

Brain*	Dog::getBrain( void ) const {
	return this->_brain;
}
