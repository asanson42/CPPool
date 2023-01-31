#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "Default ScavTrap constructor called." << std::endl;
	this->_name = "Random";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) {
	std::cout << "Parametric constructor create : " << this->_name << " ScavTrap." << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & other ) {
	*this = other;
	std::cout << "Copy ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << this->_name << " ScavTrap destructor called." << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string& target ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "ScavTrap " << this->_name;
	if ( this->_energyPoint <= 0 )
		std::cout << " do not have energy anymore! he can't attack...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

void	ScavTrap::takeDamage( unsigned int amount ) {
	if ( this->_hitPoint <= 0 ) {
		std::cout << "ScavTrap " << this->_name << " already die..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " take " << amount << " points of damage!";
	this->_hitPoint -= ( int )amount;
	if ( this->_hitPoint <= 0 ) {
		std::cout << ", he died..." << std::endl;
		return ;
	}
	std::cout << ", he still has " << this->_hitPoint << " hit points." << std::endl;
	return ;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		std::cout << "ScavTrap " << this->_name << " be repaired of " << amount << " points, ";
		this->_hitPoint += ( int )amount;
		std::cout << "now, he still has " << this->_hitPoint << " hit points." << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "ScavTrap " << this->_name;
	if ( this->_energyPoint <= 0 )
		std::cout << " do not have energy anymore! he can't be repaired...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->_name << " enter guardGate mode." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const & other ) {
	std::cout << "Assignation ScavTrap operator called." << std::endl;
	
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;	
	return *this;
}
