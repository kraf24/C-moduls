#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = (number << Fixed::fbits);
}

Fixed::Fixed(const float float_number)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(float_number * (1 << Fixed::fbits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &a)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->fixed_point = a.fixed_point;
	return(*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &b)

{
	out << b.toFloat();
	return(out);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(fixed_point);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

int Fixed::toInt(void) const
{
	return(this->fixed_point >> Fixed::fbits);
}

float Fixed::toFloat(void) const
{
	return((float)this->fixed_point / (float)(1 << Fixed::fbits));
}
