#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class	Cat : public Animal {

public:
	Cat( void );
	Cat( Cat const & other );
	virtual ~Cat( void );

	Cat&	operator=( Cat const & other );

	virtual void	makeSound( void ) const;
};

#endif
