#include "Point.h"

bool bsp(const Point, const Point, const Point, const Point);

int main() {
	Point a(0, 0), b(0, 5), c(5, 0);
	std::cout << "case 1: in-triangle" << std::endl;
	std::cout << bsp(a, b, c, Point(2, 2)) << std::endl;
	std::cout << "case 2: on-line" << std::endl;
	std::cout << bsp(a, b, c, Point(2.5, 2.5)) << std::endl;
	std::cout << "case 3: out-triangle" << std::endl;
	std::cout << bsp(a, b, c, Point(5, 5)) << std::endl;
	return 0;
}
