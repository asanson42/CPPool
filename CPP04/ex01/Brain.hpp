#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain {

private:
	static const int	_numOfIdeas = 100;

public:
	Brain( void );
	Brain( Brain const & other );
	virtual ~Brain( void );

	Brain&	operator=( Brain const & other );

	std::string	ideas[ Brain::_numOfIdeas ];
};

#endif
