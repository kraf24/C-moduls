#include"Fixed.hpp"

int main( void ) 
{
	Fixed  a;
	Fixed const  b( Fixed(1.05f) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << b.toInt() << std::endl;
	if(b == a)
		std::cout << b.toInt() << std::endl;
	else
		std::cout << a.toInt() << std::endl;

	return 0;
}