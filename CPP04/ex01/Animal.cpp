#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default Animal constructor called." << std::endl;
	this->_type = "Random";
	return ;
}

Animal::Animal( std::string const & type ) : _type( type ) {
	std::cout << "Parametric Animal constructor create a : " << this->_type << std::endl;
	return ;
}

Animal::Animal( Animal const & other ) {
	*this = other;
	std::cout << "Copy Animal constructor called." << std::endl;
	return ;
}

Animal::~Animal( void ) {
	std::cout << this->_type << " [Animal] destructor called." << std::endl;
	return ;
}

void	Animal::makeSound( void ) const {
	std::cout << "HUuuuuuuuAAAhhhh... hUUUUUUaaaaaAAAH..." << std::endl;
	return ;
}

Animal	&Animal::operator=( Animal const & other ) {
	std::cout << "Animal assignement operator called. [original]" << std::endl;
	this->_type = other._type;
	return *this;
}

const std::string	&Animal::getType( void ) const {
	return this->_type;
}

std::ostream	&operator<<( std::ostream &out, const Animal & other ) {
	out << other.getType();
	return out;
}
