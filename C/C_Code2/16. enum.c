#include <stdio.h>
enum color
{
	RED,BLACK, GREEN=5, YELLOW
	//0  1       5         6
};
int main(void)
{
	// eum color is user defined data type
	// c is variable of user defined data type eum color
	enum color c;
	int no;
	printf("\n size of c=%d", sizeof(c));

	printf("\n 0. Red \n 1. Black \n 5. Green  \n 6. Yellow ");
	printf("\n Enter Your color ::");
	//scanf("%d", &c); // way1 scanf using c
	scanf("%d", &no);

//	c= (enum color)no; // way 2 scan no and typecast it with c

	// way3 scan no and assign using switch case
	switch(no)
	{
		default: printf("\n invalid color");
				c=-1;
				break;
		case 0: c=RED; break;
		case 1: c=BLACK;  break;
		case 5: c=GREEN ;break;
		case 6: c=YELLOW; break;
	}

	switch(c)
	{
		default : printf("\n invalid color ");break;

		case RED : printf("Red color "); break;
		case BLACK: printf("Black color "); break;
		case GREEN : printf("Green color "); break;
		case YELLOW : printf("Yellow color "); break;
	}
	return 0;
}
