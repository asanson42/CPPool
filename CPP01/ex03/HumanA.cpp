#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name( name ), _weapon( weapon ) {

	std::cout << "HumanA " << this->_name << " is born." << std::endl;
	return ;
}

HumanA::~HumanA( void ) {

	std::cout << "HumanA " << this->_name << " died..." << std::endl;
	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attack with his " << this->_weapon.getType() << std::endl;
	return ;
}
