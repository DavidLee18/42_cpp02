#ifndef POINT_H
#define POINT_H

#include "Fixed.h"

class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		DEF_OCF(Point)
		Point(const float, const float);
		Fixed operator*(const Point&) const;
		bool is_between(const Point&, const Point&, const Point&) const;
};

#endif
