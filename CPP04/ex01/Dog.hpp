#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

public:
	Dog( void );
	Dog( Dog const & other );
	virtual ~Dog( void );

	virtual Dog&	operator=( Dog const & other );
	virtual Animal&	operator=( Animal const & other );

	virtual void	makeSound( void ) const;
	virtual Brain*	getBrain( void ) const;

private:
	Brain*	_brain;
};

#endif
