#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :
	Form( "ShrubberyCreationForm", 145, 137 ), _target( "" ) {
		std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
		return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form( "ShrubberyCreationForm", 145, 137 ), _target( target ) {
	std::cout << "Parametric ShrubberyCreationForm constructor called for " << this->_target << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & other ) :
	Form( "ShurbberyCreationForm", 145, 137 ), _target( other.getTarget() ) {
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = other;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "ShubberyCreationForm destructor called." << std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & other ) {
	std::cout << "ShrubberyCreationForm assignement operator called." << std::endl;
	this->_target = other.getTarget();
	return *this;
}

std::string	ShrubberyCreationForm::getTarget( void ) const {
	return this->_target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & src ) const {

	if ( this->getSign() == false || src.getGrade() > this->getToRun() )
		throw Form::gradeTooLowException();
	else {
		std::ofstream	file1;
		std::string	fileName = this->_target + "_shurbbery";

		file1.open( fileName.c_str(), std::ios::out );
		file1 << "      ,.," << std::endl;
		file1 << "      MMMM_    ,..," << std::endl;
		file1 << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
		file1 << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		file1 << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
		file1 << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
		file1 << "        ,., _\"__ \\__./ .\"" << std::endl;
		file1 << "       MMMMM_\"  \"_    ./" << std::endl;
		file1 << "        ''''      (    )" << std::endl;
		file1 << " ._______________.-'____\"---._." << std::endl;
		file1 << "  \\                          /" << std::endl;
		file1 << "   \\________________________/" << std::endl;
		file1 << "   (_)                    (_)" << std::endl;
		file1.close();
		std::cout << "Shrug created in " << this->_target << "_shrubbery file." << std::endl;
	}

	return ;
}
