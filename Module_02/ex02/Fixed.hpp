#include <iostream>

class Fixed
{
private:
	int fixed_point;
	static const int fbits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float float_number);
	Fixed(Fixed const &a);
	~Fixed();

	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	// Fixed operator++(int);
	// Fixed operator++();
	// Fixed operator--(int);
	// Fixed operator--();

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed &operator=(Fixed const &a);

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &b);