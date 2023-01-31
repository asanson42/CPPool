#include "Zombie.hpp"

int	main( void ) {

	randomChump( "chuck" );
	Zombie *zombie = newZombie("lilou");
	zombie->announce();
	delete zombie;
	return 0;
}
