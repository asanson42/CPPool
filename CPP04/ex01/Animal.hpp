#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class	Animal {
	
protected:
		std::string	_type;

public:
		
		Animal( void );
		Animal( std::string const & type );
		Animal( Animal const & other );
		virtual ~Animal( void );

		const std::string&	getType( void ) const;

		virtual Animal&	operator=( Animal const & other );

		virtual void	makeSound( void ) const;
		virtual Brain*	getBrain( void ) const = 0;
};

std::ostream	&operator<<( std::ostream &out, const Animal & other );

#endif
