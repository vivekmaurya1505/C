#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int x=5, y=0;
	y=++x; // pre increment increment value of x by 1 then assigned to y
	printf("\n x=%d y=%d", x, y); // x=6 y=6

	x=5, y=0;
	y=x++; // post increment use the old value of x to assign y and then increment value x by 1
	printf("\n x=%d y=%d", x, y); //x=6  y=5

	x=5, y=0;
	y=--x; // pre decrement decrement value of x by 1 then assigned to y
	printf("\n x=%d y=%d", x, y); // x=4 y=4

	x=5, y=0;
	y=x--; // post decrement assigned the old of x to value to y then decrement value of x by 1
	printf("\n x=%d y=%d", x, y); // x=4 y=5

	return 0;
}
