#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert a(argv[1]);
		a.convert();
	}
	else
		std::cout << "Wrong Arguments!" << std::endl;

	return (0);
}