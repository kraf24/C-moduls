#include"Point.hpp"

Point::Point() : x(0), y(0)
{	
}

Point::Point(const float a, const float b) : x(a), y(b)
{
}

Point::Point(Point const &a) : x(a.x), y(a.y)
{
}

Point::~Point()
{
}

Point &Point::operator=(Point const &a)
{
	(Fixed) this->x = (Fixed) a.x;
	(Fixed) this->y = (Fixed) a.y;
	return *this;
}

Fixed Point::give_x()
{
	return(this->x);
}

Fixed Point::give_y()
{
	return(this->y);
}