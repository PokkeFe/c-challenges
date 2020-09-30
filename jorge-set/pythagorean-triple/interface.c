#include "pythago.h"
#include <stdio.h>

void testTriple(int x, int y, int z, int expect) {
	int retint = is_pythagorean_triple(x, y, z);
	printf("Testing (%d, %d, %d)\n Expected: %d\n Actual: %d\n", x, y, z, expect, retint);
	if(expect == retint) printf("---- TEST PASSED ----\n\n");
	else printf("---- TEST FAILED ----");
}

int main() {
	printf("---- Running Tests ---- \n");
	testTriple(3, 4, 5, 1);
	testTriple(2, 2, 4, 0);
	testTriple(5, 13, 12, 1);
	testTriple(89, 80, 39, 1);

}