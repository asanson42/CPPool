#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Random Zombie created." << std::endl; 	
	return ;
}

Zombie::Zombie( std::string name ) : _name( name ) {
	std::cout <<  this->_name << ": Zombie created." << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << ": died..." << std::endl;
	return ;
}

void	Zombie::announce( void ) const {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::chooseName( std::string name ) {

	this->_name = name;
	return ;
}
