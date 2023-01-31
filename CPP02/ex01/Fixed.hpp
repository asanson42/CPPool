#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed {

private:
	int			_value;
	static const int	_bits = 8;

public:
	Fixed( void );
	Fixed( int const value );
	Fixed( float const value );
	Fixed( Fixed const &other );
	virtual	~Fixed( void );

	Fixed &operator=( Fixed const &other );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int	toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, Fixed const &value );

#endif
