#ifndef TEMPLATE_H
# define TEMPLATE_H

# include <iostream>

template< typename T >
void	swap( T & x, T & y ) {
	T	tmp;

	tmp = y;
	y = x;
	x = tmp;
	return ;
}

template< typename T >
T const 	min( T const & x, T const & y ) {
	return ( x<y ? x : y );
}

template< typename T >
T const 	max( T const & x, T const & y ) {
	return ( x>y ? x : y );
}

#endif
