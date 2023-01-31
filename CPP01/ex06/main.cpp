#include "Karen.hpp"

int	main( int argc, char **argv ) {

	Karen	Karen;

	if ( argc != 2 ) {
		std::cout << "Wrong arguments." << std::endl;
		return 0;
	}
	Karen.complain( argv[1] );
	return 0;
}
