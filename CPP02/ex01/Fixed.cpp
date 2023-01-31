#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called." << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed( int const value ) {
	std::cout << "Int constructor called." << std::endl;
	this->_value = ( value << Fixed::_bits );
	return ;
}

Fixed::Fixed( float const value ) {
	std::cout << "Float constructor called." << std::endl;
	this->_value = roundf( value * ( 1 << Fixed::_bits ));
	return ;
}

Fixed::Fixed( Fixed const &other ) {
	std::cout << "Copy constructor called." << std::endl;
	this->_value = other.getRawBits();
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed	&Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called." << std::endl;
	this->_value = other.getRawBits();
	return *this;
}

std::ostream	&operator<<( std::ostream &out, Fixed const &value ) {
	out << value.toFloat();
	return out;
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

float	Fixed::toFloat( void ) const {
	return ( float )this->_value / ( float )( 1 << Fixed::_bits );
}

int	Fixed::toInt( void ) const {
	return this->_value >> Fixed::_bits;
}
