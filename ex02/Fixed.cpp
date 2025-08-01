#include "Fixed.h"

IMPL_GETTER_SETTER(Fixed, RawBits, int, raw, raw)

IMPL_OCF(Fixed, other, raw, 0)

Fixed::Fixed(const int i) {
	std::cout << "Fixed(const int)" << std::endl;
	raw = i * (1 << bits);
}
Fixed::Fixed(const float f) {
	std::cout << "Fixed(const float)" << std::endl;
	raw = (int)(f * (1 << bits));
}
float Fixed::toFloat() const { return ((float)raw / (float)(1 << bits)); }
int Fixed::toInt() const { return (int)toFloat(); }

std::ostream& operator<<(std::ostream& o, const Fixed& f) { return (o << f.toFloat()); }

IMPL_ORD(Fixed, other, raw)
