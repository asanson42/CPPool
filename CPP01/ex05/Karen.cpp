#include "Karen.hpp"

Karen::Karen( void ) {
	
	this->_ftab[0] = &Karen::_debug;
	this->_ftab[1] = &Karen::_info;
	this->_ftab[2] = &Karen::_warning;
	this->_ftab[3] = &Karen::_error;

	std::cout << "Karen created." << std::endl;
	return ;
}

Karen::~Karen( void ) {
	std::cout << "Karen destructed." << std::endl;
	return ;
}

void	Karen::_debug( void ) {
	std::cout << "DEBUG: ";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::_info( void ) {
	std::cout << "INFO: ";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::_warning( void ) {
	std::cout << "WARNING: ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::_error( void ) {
	std::cout << "ERROR: ";
	std::cout << "This is unacceptable, I want to speak to the manager now." <<  std::endl;
	return ;
}

void	Karen::complain( std::string level ) {

	std::string	compare[] = {"debug", "info", "warning", "error"};
	int	i = 0;

	while ( i < 4 ) {
		
		if ( level == compare[i] )
			(this->*_ftab[i])();
		i++;
	}
	return ;
}
