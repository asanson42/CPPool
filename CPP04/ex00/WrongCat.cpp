#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "WrongCat constructor called." << std::endl;
	this->_type = "F****** CAT";
	return ;
}

WrongCat::WrongCat( WrongCat const & other ) {
	std::cout << "WrongCat copied!" << std::endl;
	this->_type = other.getType();
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructed!" << std::endl;
	return ;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "mm.. mm.. miaou?.." << std::endl;
	return;
}
