#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default Brain constructor called." << std::endl;
	return ;
}

Brain::Brain( Brain const & other ) {
	std::cout << "Copy Brain constructor called." << std::endl;
	*this = other;
	return ;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain&	Brain::operator=( Brain const & other ) {
	std::cout << "Brain assignement operator called." << std::endl;
	for ( int i = 0; i < Brain::_numOfIdeas; i++ )
		this->ideas[i] = other.ideas[i];
	return *this;
}
