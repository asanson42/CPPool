#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default Cat constructor called." << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat( Cat const & other ) {
	std::cout << "Copy Cat constructor called." << std::endl;
	this->_type = other._type;
	return ;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat&	Cat::operator=( Cat const & other ) {
	this->_type = other._type;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << "miaou.. MIAOUUUU!" << std::endl;
	return ;
}
