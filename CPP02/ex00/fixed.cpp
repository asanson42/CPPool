#include "fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed( Fixed const &other ) {
	std::cout << "Copy constructor called." << std::endl;
	this->_value = other.getRawBits();
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed	&Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called." << std::endl;
	if (this == &other)
		return *this;
	this->_value = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called." << std::endl;
	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called." << std::endl;
	this->_value = raw;
	return ;
}
