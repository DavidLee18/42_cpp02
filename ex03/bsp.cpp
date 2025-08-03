#include "Point.h"

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	return (a.is_between(b, c, point) && b.is_between(c, a, point) && c.is_between(a, b, point));
}
