#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class	Weapon {

public:

	void		setType( const std::string &type );
	const std::string& 	getType( void );

	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );

private:

	std::string	_type;
};

#endif
