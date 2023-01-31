#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class	Animal {
	
protected:
		std::string	_type;

public:
		
		Animal( void );
		Animal( std::string const & type );
		Animal( Animal const & other );
		virtual ~Animal( void );

		std::string	getType( void ) const;

		Animal&	operator=( Animal const & other );

		virtual void	makeSound( void ) const;
};

#endif
