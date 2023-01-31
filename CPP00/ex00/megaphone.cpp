#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (--argc)
		{
			argv++;
			for (size_t i = 0; i < std::strlen(*argv); i++)
				(*argv)[i] = std::toupper((*argv)[i]);
			std::cout << *argv;
		}
		std::cout << std::endl;
	}
	return (0);
}
