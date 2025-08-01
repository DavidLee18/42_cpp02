#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include "macros.def"

class Fixed {
	private:
		static const int bits = 8;
		int raw;
	public:
		DEF_GETTER_SETTER(RawBits, int)
		DEF_OCF(Fixed)
		Fixed(const int);
		Fixed(const float);
		float toFloat() const;
		int toInt() const;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
