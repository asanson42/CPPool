#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Random" ), _hitPoint( 10 ), _energyPoint( 10 ), _attackDamage( 0 ) {
	std::cout << "Default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoint( 10 ), _energyPoint( 10 ), _attackDamage( 0 ) {
	std::cout << "Parametric constructor create : " << this->_name << " ClapTrap." << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & other ) {
	*this = other;
	std::cout << "Copy constructor called." << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << this->_name << " destructor called." << std::endl;
	return ;
}

void	ClapTrap::attack( const std::string& target ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	if ( this->_energyPoint <= 0 )       
		std::cout << " do not have energy anymore! he can't attack...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->_hitPoint <= 0 ) {
		std::cout << "ClapTrap " << this->_name << " already die..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!";
	this->_hitPoint -= ( int )amount;
	if ( this->_hitPoint <= 0 ) {
		std::cout << ", he died..." << std::endl;
		return ;
	}
	std::cout << ", he still has " << this->_hitPoint << " hit points." << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) { 
		std::cout << "ClapTrap " << this->_name << " be repaired of " << amount << " points, ";
		this->_hitPoint += ( int )amount;
		std::cout << "now, he still has " << this->_hitPoint << " hit points." << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	if ( this->_energyPoint <= 0 )
		std::cout << " do not have energy anymore! he can't be repaired...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

std::string	ClapTrap::getName( void ) {
	return this->_name;
}
