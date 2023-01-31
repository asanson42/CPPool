#include "My.Awesome.PhoneBook.hpp"
#include <iostream>

Sample_Contact::Sample_Contact( void ) : 
	_firstName( "Random" ), _lastName( "Random" ), _nickName( "Random" ), _phoneNumber( "none" ), _darkSecret( "none" ) {
		
		return ;
}

Sample_Contact::~Sample_Contact( void ) {

	return ;
}

Sample_PhoneBook::Sample_PhoneBook( void ) : nbContact( 0 ) {

	std::cout << "PhoneBook created." << std::endl;
	return ;
}

Sample_PhoneBook::~Sample_PhoneBook( void ) {

	std::cout << "PhoneBook destructed." << std::endl;
	return ;
}

void	Sample_Contact::displayContact( void ) const {

	std::cout << std::endl << "firstName: " << this->_firstName << std::endl;
	std::cout << "lastName: " << this->_lastName << std::endl;
	std::cout << "nickName: " << this->_nickName << std::endl;
	std::cout << "phoneNumber = " << this->_phoneNumber << std::endl;
	std::cout << "His darkest Secret: " << this->_darkSecret << std::endl;

	return ;
}

std::string	Sample_Contact::getFirstName( void ) const {
	return this->_firstName;
}

std::string	Sample_Contact::getLastName( void ) const {
	return this->_lastName;
}

std::string	Sample_Contact::getNickName( void ) const {
	return this->_nickName;
}

std::string	Sample_Contact::getPhoneNumber( void ) const {
	return this->_phoneNumber;
}

std::string	Sample_Contact::getSecret( void ) const {
	return this->_darkSecret;
}

void		Sample_Contact::setFirstName( void ) {
	std::string	str;
	int		done = 1;

	while ( done ) {
		std::cout << "Enter first name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if ( str.length() == 0 ) {
			std::cout << "No name entered." << std::endl;
			done = 1;
		}
		else
			done = 0;
	}
	this->_firstName = str;
}

void		Sample_Contact::setLastName( void ) {
	std::string	str;
	int		done = 1;

	while ( done ) {
		std::cout << "Enter last name: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if ( str.length() == 0 ) {
			std::cout << "No name entered." << std::endl;
			done = 1;
		}
		else
			done = 0;
	}
	this->_lastName = str;
}

void		Sample_Contact::setNickName( void ) {
	std::string	str;
	int		done = 1;

	while ( done ) {
		std::cout << "Enter nick name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if ( str.length() == 0 ) {
			std::cout << "No name entered." << std::endl;
			done = 1;
		}
		else
			done = 0;
	}
	this->_nickName = str;
}

void		Sample_Contact::setPhoneNumber( void ) {
	std::string	str;
	int		done = 1;

	while ( done ) {
		std::cout << "Enter phone number: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if ( str.length() == 0 || !atoi( str.c_str())) {
			std::cout << "Not a  number." << std::endl;
			done = 1;
		}
		else
			done = 0;
	}
	this->_phoneNumber = str;
}

void		Sample_Contact::setSecret( void ) {
	std::string	str;
	int		done = 1;

	while ( done ) {
		std::cout << "What's his darkest secret? --> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if ( str.length() == 0 ) {
			std::cout << "none" << std::endl;
			done = 1;
		}
		else
			done = 0;
	}
	this->_darkSecret = str;
}

void	Sample_PhoneBook::createContact( int n ) {

	n--;

	std::cout << std::endl;
	this->Instance[n].setFirstName();
	this->Instance[n].setLastName();
	this->Instance[n].setNickName();
	this->Instance[n].setPhoneNumber();
	this->Instance[n].setSecret();
	
	this->nbContact++;

	return ;
}

void	Sample_PhoneBook::displayLine( std::string str ) const {

	int	i = 0;

	if ( str.size() <= 10 ) {
	
		while ( str.size() + i++ != 10)
			std::cout << " ";
		std::cout << str;
	}
	else {
	
		while (i < 9)
			std::cout << str[i++];
		std::cout << ".";
	}
	std::cout << "|";

	return ;	
}

void	Sample_PhoneBook::displayAll( void ) const {

	int	i = 0;

	std::cout << "   Index  | firstname| lastname | nickname |" << std::endl;
	while ( i < 8 &&  i < this->nbContact) {
	
		std::cout << "        " << i + 1 << " |";
		this->displayLine( this->Instance[i].getFirstName() );
		this->displayLine( this->Instance[i].getLastName() );
		this->displayLine( this->Instance[i].getNickName() );
		std::cout << std::endl;
		i++;
	}
	
	std::cout << std::endl;
	return ;
}

int	Sample_PhoneBook::isNum( std::string str ) const {

	int	i = 0;

	while ( str[i] == ' ' )
		i++;
	while ( i <= ( int )str.size() ) {
	
		if ( str[i] <= '0' && str[i] >= '9' ) 
			return 0;
		i++;
	}
	return 1;
}

void	Sample_PhoneBook::searchContact( void ) const {

	std::string		command;
	int			index = -1;

	this->displayAll();
	
	std::cout << "Which contact do you want to display ?";
	std::getline( std::cin, command );
	if(std::cin.eof())
		exit(0);
	if ( this->isNum( command ) == 1 )
		index = atoi( command.c_str() );

	if ( index > 0 && (index <= 8 && index <= this->nbContact) )
		this->Instance[index - 1].displayContact();
	else
		std::cout << "Invalid contact." << std::endl;

}
