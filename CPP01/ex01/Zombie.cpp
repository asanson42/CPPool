#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Random Zombie created." << std::endl;
	return ;
}

Zombie::Zombie( std::string name, int index ) : _name( name ), _index( index ) {
	std::cout << this->_name << " " << this->_index << ": Zombie created." << std::endl;
	return ;
}

Zombie::~Zombie( void ) {

	std::cout << "Zombie " << this->_name << " " << this->_index << " died..." << std::endl;
	return ;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << " " << this->_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
