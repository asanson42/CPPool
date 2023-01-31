#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed {

public:

	Fixed( void );				// DEFAULT CONSTRUCTOR
	Fixed( int const value );		// PARAMETRIC CONSTRUCTOR
	Fixed( float const value );		// PARAMETRIC CONSTRUCTOR
	Fixed( Fixed const & other );		// COPY CONSTRUCTOR
	virtual	~Fixed( void );			// DESTRUCTOR

	bool	operator>( Fixed const & other ) const;	//COMPARED OPERATOR
	bool	operator<( Fixed const & other ) const;	//
	bool	operator>=( Fixed const & other ) const;	//
	bool	operator<=( Fixed const & other ) const;	//
	bool	operator==( Fixed const & other ) const;	//
	bool	operator!=( Fixed const & other ) const;	//

	Fixed	&operator=( Fixed const & other );	// ASSIGNATION OPERATOR
	Fixed	operator+( Fixed const & other ) const;	// ADDITION OPERATOR
	Fixed	operator-( Fixed const & other ) const;	// SUBSTRACTION OPERATOR
	Fixed	operator*( Fixed const & other ) const;	// MULTIPLICATION OPERATOR
	Fixed	operator/( Fixed const & other ) const;	// DIVISION OPERATOR

	Fixed	operator++(int);
	Fixed	operator++();
	Fixed	operator--(int);
	Fixed	operator--();

	static Fixed const &min( Fixed const &a, Fixed const &b );
	static Fixed const &max( Fixed const &a, Fixed const &b );
	static Fixed &min( Fixed &a, Fixed &b );
	static Fixed &max( Fixed &a, Fixed &b );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int	toInt( void ) const;

private:

	int			_n;
	static const int	_bits = 8;

};

std::ostream	&operator<<( std::ostream &out, Fixed const &value );
Fixed const &min( Fixed const &a, Fixed const &b );
Fixed const &max( Fixed const &a, Fixed const &b );
Fixed &min( Fixed &a, Fixed &b );
Fixed &max( Fixed &a, Fixed &b );

#endif
