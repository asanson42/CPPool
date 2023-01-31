#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ) {

	std::cout << "HumanB " << this->_name << " is born." << std::endl;
	return ;
}

HumanB::~HumanB( void ) {

	std::cout << "HumanB " << this->_name << " died..." << std::endl;
	return ;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon& weapon ) {

	this->_weapon = &weapon;
	return ;
}
