#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & other );
	virtual ~FragTrap( void );

	FragTrap&	operator=( FragTrap const &other );

	void	attack( const std::string & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	highFiveGuys( void );

};

#endif
