#include <iostream>

int	main( void ) {

	std::string	str = "HI THIS IS BRAIN";

	std::string*	stringPtr = &str;
	std::string&	stringRef = str;

	std::cout << "Address of str = " << &str << std::endl;
	std::cout << "Address by using Ptr = " << stringPtr << std::endl;
	std::cout << "Address by using Ref = " << &stringRef << std::endl << std::endl;

	std::cout << "Str by using Ptr = <" << *stringPtr << ">" << std::endl;
	std::cout << "Str by using Ref = <" << stringRef << ">" << std::endl;

	return 0;
}
