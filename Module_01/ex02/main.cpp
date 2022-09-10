#include<iostream>
#include<string.h>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*ptrbrain = &brain;
	std::string	&refbrain = brain;

	std::cout << &brain << std::endl;
	std::cout << ptrbrain << std::endl;
	std::cout << &refbrain << std::endl;

	std::cout << brain << std::endl;
	std::cout << *ptrbrain << std::endl;
	std::cout << refbrain << std::endl;
}