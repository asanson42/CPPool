#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class	WrongAnimal {

protected:
		std::string		_type;

public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & other );
		virtual	~WrongAnimal( void );

		std::string	getType( void ) const;

		WrongAnimal&	operator=( WrongAnimal const & other );

		void	makeSound( void ) const;
};

#endif
