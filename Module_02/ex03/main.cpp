#include"Fixed.hpp"
#include"Point.hpp"

int main( void ) 
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 5);
	Point poi(9, 0);

	std::cout << bsp(a, b, c, poi) << std::endl;

	return (0);
}