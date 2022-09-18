#include"Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Fixed give_x();
		Fixed give_y();

		Point();
		Point(const float x, const float y);
		Point(Point const &a);
		Point &operator=(Point const &a);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
