#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default Animal WRONG constructor called." << std::endl;
	this->_type = "mistake of nature";
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other ) {
	std::cout << "Copy Animal WRONG construcor called." << std::endl;
	this->_type = other.getType();
	return ;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called." << std::endl;
	return ;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & other ) {
	this->_type = other.getType();
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "HUuuuuuuuAAAhhhh... hUUUUUUaaaaaAAAH... [\"You hear that?? It seems that a giraffe is dying.\"]" << std::endl;
	return ;
}
