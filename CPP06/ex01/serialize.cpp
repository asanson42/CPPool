#include <iostream>
#include <string>
#include <stdint.h>

typedef struct	s_Data {
	std::string	data;
}		Data;

uintptr_t	serialize( Data *ptr ) {
	std::cout << "Serialize function called." << std::endl;
	return reinterpret_cast<uintptr_t>( ptr );
}

Data*		deserialize( uintptr_t raw ) {
	std::cout << "Deserialize function called." << std::endl;
	return reinterpret_cast<Data*>( raw );
}

int	main( void ) {

	Data		*data = new Data;
	Data		*test;
	uintptr_t	raw;

	data->data = "Hello world";
	raw = serialize( data );
	test = deserialize( raw );
	std::cout << data->data << " : " << test->data << std::endl;

	return 0;
}
