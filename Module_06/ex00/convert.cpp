#include"convert.hpp"


bool cheakNonAlf(std::string str)
{
	return str == "nan" || str == "nanf" || str == "+inf" || str == "inf" || str == "-inf"
		|| str == "-inff"|| str == "+inff" || str == "+inf";
}

void getChar(std::string str)
{
	if (cheakNonAlf(str))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	char cnum = std::stoi(str);
	if (cnum < 32 && cnum != 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << cnum << std::endl;
}

void getInt(std::string str)
{
	if(cheakNonAlf(str))
	{
		std::cout << "impossible" << std::endl;
		return;
	}

	std::cout << atoi(str.c_str()) << std::endl;
}

void getFloat(std::string str)
{
	float fnum = std::stof(str);
	if ((fnum - static_cast<int>(fnum)) == 0)
	{
		std::cout << fnum << ".0f" << std::endl;
		return;
	}
	std::cout << fnum << "f" << std::endl;
}

static void getDouble(std::string str)
{
	double ret = std::stod(str);
	if ((ret - static_cast<int>(ret)) == 0)
	{
		std::cout << ret << ".0" << std::endl;
		return;
	}
	std::cout << ret << std::endl;
}

void printDifTypes(std::string &str)
{
	std::cout << "char: " , getChar(str);
	std::cout << "int: " , getInt(str);
	std::cout << "float: " , getFloat(str);
	std::cout << "double: " , getDouble(str);
}