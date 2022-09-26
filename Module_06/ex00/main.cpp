#include"convert.hpp"

static bool cheakString (std::string &str)
{
	if (cheakNonAlf(str))
		return false;
	
	if(str.length() == 1 && isalpha(str[0]))
		str = std::to_string(static_cast<int>(str[0]));

	for(size_t i = 0; i < str.size(); i++)
	{
		if(str.length() != 1 && isalpha(str[i]) && str[i] != 'f')
			return true;
	}
	
	return false;
}

int main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::invalid_argument("no argument");
		std::string str(argv[1]);
		if(cheakString(str))
			throw std::invalid_argument("ivalid input");
		printDifTypes(str);
	}
	catch(std::invalid_argument &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}