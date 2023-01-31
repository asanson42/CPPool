#include "easyFind.hpp"
#include "vector"

int	main( void ) {

	std::vector<int>		vect;
	std::vector<int>::iterator	it;

	for ( int i = 0; i < 100; i++ )
		vect.push_back( i );
	
	try {
		it = easyFind( vect, 43 );
		std::cout << &it <<  " : " << *it << std::endl;
	}
	catch ( std::exception& e ) {
		( void )e;
		std::cout << "Can't find this param." << std::endl;
	}

	try {
		it = easyFind( vect, 78 );
		std::cout << &it << " : " << *it << std::endl;
	}
	catch ( std::exception& e ) {
		( void )e;
		std::cout << "Can't find this param." << std::endl;
	}

	try {
		it = easyFind( vect, 400 );
		std::cout << &it << " : " << *it << std::endl;
	}
	catch ( std::exception& e ) {
		( void )e;
		std::cout << "Can't find this param." << std::endl;
	}

	return 0;
}
