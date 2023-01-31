#ifndef MY_AWESOME_PHONEBOOK_H
# define MY_AWESOME_PHONEBOOK_H

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

class	Sample_Contact {

public:

	Sample_Contact( void );
	~Sample_Contact( void );

	void	displayContact( void ) const;

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickName( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getSecret( void ) const;

	void		setFirstName( void );
	void		setLastName( void );
	void		setNickName( void );
	void		setPhoneNumber( void );
	void		setSecret( void );

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkSecret;
};

class	Sample_PhoneBook {

public:

	int		nbContact;
	Sample_Contact	Instance[8];

	Sample_PhoneBook( void );
	~Sample_PhoneBook( void );

	void		createContact( int n );

	int	isNum( std::string str ) const;
	void	displayLine( std::string str ) const;
	void	displayAll( void ) const;
	void	searchContact( void ) const;

};

#endif
