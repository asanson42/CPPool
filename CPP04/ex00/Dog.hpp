#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class	Dog : public Animal {

public:
	Dog( void );
	Dog( Dog const & other );
	virtual ~Dog( void );

	Dog&	operator=( Dog const & other );

	virtual void	makeSound( void ) const;
};

#endif
