#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>
class Array
{

public:

	Array< T >( void ): _size( 0 ), _array( NULL ) {
		std::cout << "Array default constructor called." << std::endl;
		return ;
	}			// construit un array vide
	Array< T >( unsigned int n ): _size( n ) {
		std::cout << "Parametric Array constructor called." << std::endl;
		try {
			if ( n < 0 )
				throw std::exception();
			this->_array = new	T[n];
			return ;
		}
		catch ( std::exception& e ) {
			std::cout << "Index error." << std::endl;
		}
	}			// construit un array de n T
	Array< T >( const Array< T > & other ) {
		std::cout << "Copy Array constructor called." << std::endl;
		*this = other;
		return ;
	}			// construit une copy de other._array
	~Array< T >( void ) {
		std::cout << "Array destructor called." << std::endl;
		if ( this->_size > 0 )
			delete [] this->_array;
	}			// delete this->_array
	Array< T >&	operator=( const Array<T> & other ) {
		std::cout << "Array assignement operator called." << std::endl;
		if ( this == &other )
			return *this;
		if ( this->_size > 0 )
			delete [] this->_array;
		this->_size = other.size();
		this->_array = new T[this->_size];
		for ( int i = 0; i < this->_size; i++ )
			this->_array[i] = other[i];
		return *this;
	}
	T&		operator[]( int const index ) const {
		if ( index >= this->_size || index < 0 )
			throw std::exception();
		return this->_array[index];
	}

	int		size( void ) const {
		return this->_size;
	}

private:

	int		_size;
	T		*_array;

};

template<typename T>
std::ostream	&operator<<( std::ostream &ostr, const Array<T> &instance );

#endif
