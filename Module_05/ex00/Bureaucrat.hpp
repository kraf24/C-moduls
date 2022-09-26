#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include"iostream"

#define Max 150
#define Min 1

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
	std::string getName() const;
	int getGrade() const;
	void	increment();
	void	decrement(); 
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif