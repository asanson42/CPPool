#include "Class.hpp"

Base::~Base( void ) {

}

Base	*generate( void ) {

	int	_class = rand() % 3;

	std::cout << "Generate function called : ";
	if ( _class == 0 ) {
		std::cout << "New class A created." << std::endl;
		return new A();
	}
	else if ( _class == 1 ) {
		std::cout << "New class B created." << std::endl;
		return new B();
	}
	else {
		std::cout << "New class C created." << std::endl;
		return new C();
	}
	return NULL;
}

void	identify( Base* p ) {

	A	*a;
	B	*b;
	C	*c;

	std::cout << "Pointers identify function called : ";
	if ( (a = dynamic_cast<A *>(p)) )
		std::cout << "A" << std::endl;
	else if ( (b = dynamic_cast<B *>(p)) )
		std::cout << "B" << std::endl;
	else if ( (c = dynamic_cast<C *>(p)) )
		std::cout << "C" << std::endl;
	return ;
}

void	identify( Base&	p ) {

	std::cout << "References identify function called : ";
	try {
		A	&a = dynamic_cast<A &>(p);
		( void )a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( std::exception& e ) {
		( void )e;
	}

	try {
		B	&b = dynamic_cast<B &>(p);
		( void )b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch ( std::exception& e ) {
		( void )e;
	}

	try {
		C	&c = dynamic_cast<C &>(p);
		( void )c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch ( std::exception& e ) {
		( void )e;
	}
	return ;
}
