#include"Harl.hpp"

int main(int argc, char **argv)
{
	Harl info;
	try
	{
		if(argc != 2)
			throw (__error);
		info.complain(argv[1]);
		(void)argv;
	}
	catch(...)
	{
		std::cerr << "ERROR" << std::endl;
	}
	return (0);
}