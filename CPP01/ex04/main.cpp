#include <iostream>
#include <string>
#include <fstream>

void	fpos( std::string content, std::string s1, std::string s2, std::ofstream &file2 ) {
	
	size_t	pos;
	std::string	new_content;
	int	i = 0;

	pos = content.find(s1);
	if ( pos == std::string::npos )
		file2 << content;
	else {
		while ( i != pos )
			file2 << content[i++];
		if ( i == pos ) {
			file2 << s2;
			i += s1.length();
			new_content = content.substr( i, content.length() );
			fpos( new_content, s1, s2, file2 );
		}
	}
}

void	freplace( std::string name, std::string s1, std::string s2 ) {
	std::ifstream	file1( name );
	std::string	rep = ".replace";
	std::ofstream	file2( (name + rep), std::ios::out );
	std::string	content;
	size_t	pos;

	if ( !file1 )
		std::cout << "Error file: " << name << std::endl;
	if ( !file2 )
		std::cout << "Error file: " << (name + rep) << std::endl;
	if ( s1 == "" || s2 == "" )
		std::cout << "Error parsing: empty string" << std::endl;
	else {
		while ( getline(file1, content) ) {
			fpos( content, s1, s2, file2 );
			file2 << std::endl;
		}
	}
	file1.close();
	file2.close();

}

int	main( int argc, char **argv ) {
	if ( argc != 4 )
		std::cout << "Command: filename s1 s2" << std::endl;
	else
		freplace( argv[1], argv[2], argv[3] );
	return 0;
}
