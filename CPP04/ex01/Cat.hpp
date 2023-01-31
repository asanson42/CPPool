#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {

public:
	Cat( void );
	Cat( Cat const & other );
	virtual ~Cat( void );

	Cat	&operator=( Cat const & other );
	virtual	Animal	&operator=( Animal const & other );

	virtual void	makeSound( void ) const;
	virtual Brain*	getBrain( void ) const;

private:

	Brain*	_brain;
};

#endif
