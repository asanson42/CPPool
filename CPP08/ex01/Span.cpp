#include "Span.hpp"

Span::Span( void ) {
	std::cout << "Default constructor called." << std::endl;
	this->_size = 0;
	this->_n = 0;
	return ;
}

Span::Span( unsigned int n ) : _size( n ), _n( 0 ) {
	std::cout << "Parametric constructor called." << std::endl;
	return ;
}

Span::Span( Span const & other ) {
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
	return ;
}

Span::~Span( void ) {
	std::cout << "Destructor called." << std::endl;
	return ;
}

Span&	Span::operator=( Span const & other ) {
	std::cout << "Assignement operator called." << std::endl;
	this->_size = other.getSize();
	this->_n = other.getN();

	std::vector<int>	otherVect = other.getIt();
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = otherVect.end();

	for ( it = otherVect.begin(); it != ite; ++it ) {
		this->addNumber( *it );
	}
	return *this;
}

unsigned int	Span::getSize( void ) const {
	return this->_size;
}

unsigned int	Span::getN( void ) const {
	return this->_n;
}

std::vector<int>	Span::getIt( void ) const {
	return this->_vect;
}

void	Span::addNumber( int const n ) {
	
	if ( this->_n >= this->_size ) {
		std::cout << "Too many members in vector." << std::endl;
		throw std::exception();
	}
	this->_n++;
	this->_vect.push_back( n );
	return ;
}

void Span::addNumbers(std::vector<int>::iterator its, std::vector<int>::iterator ite)
{
    for (std::vector<int>::iterator it = its; it != ite; it++)
    {
        //std::cout << *it << std::endl;
        addNumber(*it);
    }    
}

int	Span::_lowestDist( int n ) const {
	std::vector<int>::const_iterator	it = this->_vect.begin();
	std::vector<int>::const_iterator	ite = this->_vect.end();
	int	dist = this->longestSpan();

	for ( ; it != ite; ++it ) {
		if ( dist > n - *it && n - *it > 0 )
			dist = n - *it;
	}
	return dist;
}

int	Span::shortestSpan( void ) const {

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = this->_vect.end();
	int		dist = this->longestSpan();
	int		ret = 0;


	if ( this->_n <= 1 ) {
		std::cout << "No distance found." << std::endl;
		throw std::exception();
	}
	
	for ( it = this->_vect.begin(); it != ite; ++it ) {
		ret = this->_lowestDist( *it );
		if ( dist > ret )
			dist = ret;
	}
	return dist;
}

int	Span::_longestDist( int n ) const {
	std::vector<int>::const_iterator	it = this->_vect.begin();
	std::vector<int>::const_iterator	ite = this->_vect.end();
	int	dist = 0;

	for ( ; it != ite; ++it ) {
		if ( dist < n - *it && n - *it > 0 )
			dist = n - *it;
	}
	return dist;
}

int	Span::longestSpan( void ) const {
	
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = this->_vect.end();
	int	dist = 0;
	int	ret = 0;

	if ( this->_n <= 1 ) {
		std::cout << "No distance found." << std::endl;
		throw std::exception();
	}

	for ( it = this->_vect.begin(); it != ite; ++it ) {
		ret = this->_longestDist( *it );
		if ( dist < ret )
			dist = ret;
	}
	return dist;
}

std::ostream &operator<<(std::ostream &out, const Span &current)
{   
    std::cout << "-----Vector----" << std::endl;
    for (unsigned int i = 0; i < current.getSize(); i++)
        std::cout << current.getIt()[i] << std::endl;
    std::cout << "---------------" << std::endl;
    return (out); 
}