#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class	Span {

public:
	Span( void );
	Span( unsigned int n );
	Span( Span const & other );
	~Span( void );

	void	addNumber( int const n );
	void	addNumbers( std::vector<int>::iterator its, std::vector<int>::iterator ite );

	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;

	Span&	operator=( Span const & other );

	unsigned int			getSize( void ) const;
	unsigned int			getN( void ) const;
	std::vector< int >	getIt( void ) const;

private:
	std::vector< int >	_vect;
	unsigned int		_size;
	unsigned int		_n;

	int	_lowestDist( int n )const;
	int	_longestDist( int n )const;
};
std::ostream &operator<<(std::ostream &out, const Span &current);

#endif
