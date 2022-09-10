#include"Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{

	void (Harl::*complaint[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = {
		"DEBUG", "INFO",
		"WARNING", "ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
		{
			while(i < 4)
				(this->*complaint[i++])();
			return;
		}
	wrongInput();
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’"
		"t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
		"n coming here for years and you just started working here last month.\n"
		<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n"
		<< std::endl;
}

void	Harl::wrongInput( void )
{
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
}