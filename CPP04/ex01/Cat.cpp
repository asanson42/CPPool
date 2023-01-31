#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default Cat constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat( Cat const & other ) {
	std::cout << "Copy Cat constructor called." << std::endl;
	*this = other;
	return ;
}

Cat::~Cat( void ) {
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat	&Cat::operator=( Cat const & other ) {
	std::cout << "Cat assignement operator called." << std::endl;
	this->_type = other.getType();
	*( this->_brain ) = *( other.getBrain() );
	return *this;
}

Animal	&Cat::operator=( Animal const & other ) {
	std::cout << "Animal assignement opearator called. [Cat]" << std::endl;
	this->_type = other.getType();
	*( this->_brain ) = *( other.getBrain() );
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "miaou.. MIAOUUUU!" << std::endl;
	return ;
}

Brain*		Cat::getBrain( void ) const {
	return this->_brain;
}
