#include"manipulator.hpp"

int main(int argc, char **argv)
{
	std::ofstream oldfile;
	NewFile newfile;

	try
	{
		if (argc != 4)
			throw (__error);
		newfile.getInfo(argv);
		newfile.openFile();
	}
	catch(...)
	{
		std::cerr << "ERROR" << std::endl;
	}
	
	return (0);
}