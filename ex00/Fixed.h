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
};

#endif
