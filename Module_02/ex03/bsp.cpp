#include"Point.hpp"
#include"Fixed.hpp"

Fixed signd( Point a, Point b, Point c)
{
	return ((a.give_x()-c.give_x())*(b.give_y()-c.give_y())- \
				(b.give_x()-c.give_x())*(a.give_y()-c.give_y()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	bool neg, pos;

	d1 = signd(point, a, b);
	d2 = signd(point, b, c);
	d3 = signd(point, c, a);

	neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(neg && pos);
}
