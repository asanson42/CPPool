#include "Animal.hpp"

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called." << std::endl;
	return ;
}

const	std::string	&Animal::getType( void ) const {
	return this->_type;
}
