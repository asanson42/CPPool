#include <iostream>
#include <cstdlib>
#include "iter.hpp"

template <typename T>
void	ft_printf( T &t ) {
	std::cout << t << std::endl;
}

int	main( void ) {
	//CHAR
	std::cout << "::ITER CHAR" << std::endl;
	char tab[6] = {'h', 'e', 'l', 'l', 'o'};
	::iter(tab, 6, &ft_printf);

	//STRING
	std::cout << "::ITER STRING" << std::endl;
	std::string tab2[3] = {"Hello", "42", "World"};
	::iter(tab2, 3, &ft_printf);

	//INT
	std::cout << "::ITER INT" << std::endl;
	int tab3[5] = {4, 2, 42, 84, 0};
	::iter(tab3, 5, &ft_printf);

	//FLOAT
	std::cout << "::ITER FLOAT" << std::endl;
	float	tab4[3] = {3.14, 42.21, 84.42};
	::iter(tab4, 3, &ft_printf);

	return 0;
}