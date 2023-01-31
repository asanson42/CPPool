#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {

private:
	
	std::string	_name;
	int		_hitPoint;
	int		_energyPoint;
	int		_attackDamage;

public:

	ClapTrap( void );			//DEFAULT CONSTRUCTOR
	ClapTrap( std::string name );		//PARAMETRIC CONSTRUCTOR
	ClapTrap( ClapTrap const & other );	//COPY CONSTRUCTOR
	virtual	~ClapTrap( void );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string	getName( void );
};

#endif
