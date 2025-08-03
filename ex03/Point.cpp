#include "Point.h"

IMPL_OCF(Point, other, x, 0, y, 0)

Point::Point(const float x, const float y): x(x), y(y) {}

Fixed Point::operator*(const Point& other) const {
	return (this->x * other.y - this->y * other.x);
}

bool Point::is_between(const Point& a, const Point& b, const Point& which) const {
	return ((Point(a.x.toFloat() - x.toFloat(), a.y.toFloat() - y.toFloat()) * Point(which.x.toFloat() - x.toFloat(), which.y.toFloat() - y.toFloat()))
		* (Point(b.x.toFloat() - x.toFloat(), b.y.toFloat() - y.toFloat()) * Point(which.x.toFloat() - x.toFloat(), which.y.toFloat() - y.toFloat()))
		< Fixed(0));
}
