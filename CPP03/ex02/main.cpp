#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {

	FragTrap	chuck( "chuck" );
	FragTrap	random;
	FragTrap	copy(chuck);

	std::cout << std::endl;

	chuck.takeDamage( 2 );
	chuck.beRepaired( 2 );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );
	chuck.attack( random.getName() );

	std::cout << std::endl;

	chuck.attack( random.getName() );
	chuck.beRepaired( 2 );

	std::cout << std::endl;

	chuck.takeDamage( 9 );
	chuck.takeDamage( 2 );
	chuck.takeDamage( 10 );

	std::cout << std::endl;

	random.takeDamage( 12 );
	
	random.beRepaired( 2 );
	random.attack( copy.getName() );

	chuck.highFiveGuys(); 

	std::cout << std::endl;

	return 0;
}
