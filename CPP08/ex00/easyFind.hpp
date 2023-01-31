#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>

template< typename T >
typename T::iterator		easyFind( T & contain, int value ) {

	typename T::iterator		res = find( contain.begin(), contain.end(), value );

	if ( res == contain.end() )
		throw std::exception();
	return res;
}

#endif
