#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed {

private:
	int			_value;
	static int const	_bits = 8;

public:
	Fixed( void );
	Fixed( Fixed const &other );
	virtual ~Fixed( void );

	Fixed &operator=( Fixed const &other );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
