#include <iostream>
#include "My.Awesome.PhoneBook.hpp"


int	main( void ) {
	
	Sample_PhoneBook	phoneBook;
	int			contactNumber = 1;
	int			run = 1;
	std::string		command;

	while ( run ) {
		
		std::cout << "Input a command: ";
		std::getline( std::cin, command );
		if (std::cin.eof())
			exit(0);

		if ( command.compare( "exit" ) == 0 ) {
			
			run = 0;
			exit( 0 );
		}
		else if ( command.compare( "add" ) == 0) {
		
			if (contactNumber > 8)
				contactNumber = 1;
			phoneBook.createContact( contactNumber++ );

		}
		else if ( command.compare( "search" ) == 0) {
		
			phoneBook.searchContact();
		}
		else {
		
			std::cout << "Wrong command.";
		}
		std::cout << std::endl;

	}

	return 0;
}
