#include "Zombie.hpp"

int	isNum( std::string str ) {

	int	i = 0;

	if (str[i] == ' ')
		i++;
	while ( i < ( int )str.size() ) {
	
		if ( (str[i] < '0' || str[i] > '9') && str[i] != ' ' )
			return 0;
		i++;
	}
	return 1;
}

int	main( void ) {

	Zombie*		Horde;
	std::string	name;
	int		N = 0;

	std::cout << "Enter Zombies number ( int ): ";
	std::getline( std::cin, name );
	if ( isNum( name ) == 0 ) {
	
		std::cout << "Wrong number." << std::endl;
		return 0;
	}
	N = atoi( name.c_str() );
	std::cout << "Enter Zombies name: ";
	std::getline( std::cin, name );
	std::cout << std::endl;
	Horde = zombieHorde( N, name );

	for ( int i = 0; i < N; i++)
		Horde[i].announce();

	std::cout << std::endl;

	delete [] Horde;
	return 0;
}
