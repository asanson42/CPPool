#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <cstdlib>

class	Zombie {

public:

	Zombie( void );
	Zombie( std::string name, int index );
	~Zombie( void );

	Zombie	*newZombie( Zombie *Zombie, std::string name, int index );
	void	announce( void ) const;

private:
	std::string	_name;
	int		_index;

};

Zombie*	zombieHorde( int N, std::string name );

#endif
