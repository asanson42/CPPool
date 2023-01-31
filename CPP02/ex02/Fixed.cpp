#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "DEFAULT constructor called." << std::endl;
	this->_n = 0;
	return ;
}

Fixed::Fixed( int const value ) {
	std::cout << "PARAMETRIC constructor: [int] called: ";
	this->_n = ( value << Fixed::_bits );
	std::cout << this->toFloat() << std::endl;
	return ;
}

Fixed::Fixed( float const value ) {
	std::cout << "PARAMETRIC constructor: [float] called: ";
	this->_n = roundf( value * ( 1 << Fixed::_bits ) );
	std::cout << this->toFloat() << std::endl;;
	return ;
}

Fixed::Fixed( Fixed const &other ) {
	std::cout << "COPY constructor called." << std::endl;
	this->_n = other.getRawBits();
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed	&Fixed::operator=( Fixed const &other ) {
	std::cout << "Assignation operator called." << std::endl;
	this->_n = other.getRawBits();
	return *this;
}

Fixed	Fixed::operator+( Fixed const &other ) const {
	std::cout << "Addition operator called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	Fixed	res( *this );

	res.setRawBits( this->getRawBits() + other.getRawBits() );
	return res;
}

Fixed	Fixed::operator-( Fixed const &other ) const {
	std::cout << "Substraction operator called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;

	Fixed	res( *this );

	res.setRawBits( this->getRawBits() - other.getRawBits() );
	return res;
}

Fixed	Fixed::operator*( Fixed const &other ) const {
	std::cout << "Multiplication operator called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;

	Fixed	res( *this );
	long	tmp1, tmp2;

	tmp1 = (( long )this->getRawBits());
	tmp2 = (( long )other.getRawBits());
	res.setRawBits( ( tmp1 * tmp2 ) / ( 1 << Fixed::_bits ) );
	return res;
}

Fixed	Fixed::operator/( Fixed const &other ) const {
	std::cout << "Division operator called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;

	Fixed	res( *this );
	long	tmp1, tmp2;

	tmp1 = ( long )this->getRawBits();
	tmp2 = ( long )other.getRawBits();
	res.setRawBits( tmp1 * ( 1 << Fixed::_bits ) / tmp2 );
	return res;
}

bool	Fixed::operator>( Fixed const &other ) const {
	std::cout << "Comparison operator [>] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() > other.getRawBits();
}

bool	Fixed::operator<( Fixed const &other ) const {
	std::cout << "Comparison operator [<] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=( Fixed const &other ) const {
	std::cout << "Comparison operator [>=] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=( Fixed const &other ) const {
	std::cout << "Comparison operator [<=] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==( Fixed const &other ) const {
	std::cout << "Comparison operator [==] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=( Fixed const &other ) const {
	std::cout << "Comparison operator [!=] called with " << this->toFloat();
	std::cout << " and " << other.toFloat() << std::endl;
	
	return this->getRawBits() != other.getRawBits();
}

int	Fixed::getRawBits( void ) const {
	return this->_n;
}

void	Fixed::setRawBits( int const raw ) {
	this->_n = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	return ( float )this->_n / ( float )( 1 << Fixed::_bits );
}

int	Fixed::toInt( void ) const {
	return this->_n >> Fixed::_bits;
}

Fixed	Fixed::operator++() {
	std::cout << "pre Increment operator called." << std::endl;
	this->_n++;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	std::cout << "post Increment operator called." << std::endl;
	Fixed	tmp( *this );
	operator++();
	return tmp;
}

Fixed	Fixed::operator--() {
	std::cout << "pre Decrement operator called." << std::endl;
	this->_n--;
	return *this;
}

Fixed	Fixed::operator--( int ) {
	std::cout << "post Decrement operator called." << std::endl;
	Fixed	tmp( *this );
	operator--();
	return tmp;
}

std::ostream	&operator<<( std::ostream &out, Fixed const &value ) {
	out << value.toFloat();
	return out;
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b ) {
	if ( a > b )
		return b;
	return a;
}

Fixed &Fixed::min( Fixed &a, Fixed &b ) {
	if ( a > b )
		return b;
	return a;
}

Fixed const	&min( Fixed const &a, Fixed const &b ){
	return Fixed::min( a, b );
}

Fixed	&min( Fixed &a, Fixed &b ) {
	return Fixed::min( a, b );
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b ) {
	if ( a > b )
		return a;
	return b;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b ) {
	if ( a > b )
		return a;
	return b;
}

Fixed const	&max( Fixed const &a, Fixed const &b ) {
	return Fixed::max( a, b );
}

Fixed	&max( Fixed &a, Fixed &b ) {
	return Fixed::max( a, b );
}
