#ifndef HUMANA_H
# define HUMANA_H

# include "./Weapon.hpp"

class	HumanA {

public:

	HumanA( std::string name,  Weapon& Weapon );
	~HumanA( void );

	void	attack( void );

private:

	std::string	_name;
	Weapon&		_weapon;
};

#endif
