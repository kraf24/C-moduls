#include <iostream>

class Fixed
{
private:
	int fixed_point;
	static const int fbits = 16;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float float_number);
	Fixed(Fixed const &a);
	~Fixed();

	Fixed &operator=(Fixed const &a);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &b);