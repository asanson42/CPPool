#include "Zombie.hpp"

Zombie*	Zombie::newZombie( Zombie *Zombie, std::string name, int index ) {
	this->_name = name;
	this->_index = index + 1;
	return (Zombie);
}

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*Horde = new Zombie[N];
	int	i = 0;

	std::cout << std::endl << "Assembling Zombies..." << std::endl << std::endl;

	while ( i < N ) {
		Horde[i].newZombie(Horde, name, i);
		i++;
	}
	return (Horde);
}
