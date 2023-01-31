#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default Dog constructor called." << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog( Dog const & other ) {
	std::cout << "Copy Dog constructor called." << std::endl;
	this->_type = other._type;
	return ;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

Dog	&Dog::operator=( Dog const & other ) {
	this->_type = other._type;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << "WOUUUUAF! WOUAAAAF!" << std::endl;
	return ;
}
