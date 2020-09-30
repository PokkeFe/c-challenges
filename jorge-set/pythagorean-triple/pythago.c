#include "pythago.h"

int is_pythagorean_triple(int x, int y, int z){
	int a, b, c;
	
	if(x > y && x > z) {
		c = x, b = y, a = z;
	} else if(y > x && y > z) {
		c = y, b = x, a = z;
	} else {
		c = z, b = x, a = y;
	}

	if(a*a + b*b == c*c){
		return 1;
	}

	return 0;

}