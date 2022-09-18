#include <iostream>

class Fixed
{
private:
	int fixed_point;
	static const int fbits = 8;
public:
	Fixed();
	Fixed(Fixed const &a);
	~Fixed();

	Fixed &operator=(Fixed const &a);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
