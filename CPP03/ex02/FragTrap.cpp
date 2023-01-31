#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "Default FragTrap constructor called." << std::endl;
	this->_name = "Random";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap( std::string name ) {
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "Parametric constructor create : " << this->_name << "FragTrap." << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & other ) {
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = other;
	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << this->_name << " FragTrap destructor called." << std::endl;
	return ;
}

void	FragTrap::attack( const std::string& target ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		std::cout << "FragTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "FragTrap " << this->_name;
	if ( this->_energyPoint <= 0 )
		std::cout << " do not have energy anymore! he can't attack...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

void	FragTrap::takeDamage( unsigned int amount ) {
	if ( this->_hitPoint <= 0 ) {
		std::cout << "FragTrap " << this->_name << " already died..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage!";
	this->_hitPoint -= ( int )amount;
	if ( this->_hitPoint <= 0 ) {
		std::cout << " He died..." << std::endl;
		return ;
	}
	std::cout << " He still has " << this->_hitPoint << " hit points." << std::endl;
	return ;
}

void	FragTrap::beRepaired( unsigned int amount ) {
	if ( this->_energyPoint > 0 && this->_hitPoint > 0 ) {
		std::cout << "FragTrap " << this->_name << " be repaired of " << amount << " points, ";
		this->_hitPoint += ( int )amount;
		std::cout << "now, he still has " << this->_hitPoint << " hit points." << std::endl;
		this->_energyPoint--;
		return ;
	}
	std::cout << "FragTrap " << this->_name;
	if ( this->_energyPoint <= 0 )
		std::cout << " do not have energy anymore! He can't be repaired...";
	else
		std::cout << " died!... Let him rest in peace.";
	std::cout << std::endl;
	return ;
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "FragTrap " << this->_name << " say : <HIGH FIVE GUYS !>" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=( FragTrap const & other ) {
	std::cout << "Assignation FragTrap operator called." << std::endl;

	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;

	return *this;
}
