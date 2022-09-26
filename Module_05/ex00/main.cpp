#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat first("Bob", 1);
		std::cout << first << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cerr << "TooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << "TooLowException" << std::endl;
	}
	try
	{
		Bureaucrat second;
		std::cout << second << std::endl;
		second.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cerr << "TooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << "TooLowException" << std::endl;
	}
	try
	{
		Bureaucrat thired;
		thired = Bureaucrat("name", 150);
		std::cout << thired << std::endl;
		thired.decrement();
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cerr << "TooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << "TooLowException" << std::endl;
	}
		try
	{
		Bureaucrat last("Progress", 125);
		std::cout << last << std::endl;
		while(1)
			last.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e){
		std::cerr << "TooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cerr << "TooLowException" << std::endl;
	}

	return 0;
}