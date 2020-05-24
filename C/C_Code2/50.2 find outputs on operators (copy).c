
	//*1.
	/*
	#include<stdio.h>
	int main(void)
	{
		int x = -1, y = 2, z = 0;
		z =++x && y++;
		printf("\n x=%d, y=%d,  z=%d", x, y, z);
		return 0;
	}
	*/
	///* 2.
	/*
	#include<stdio.h>
	int main(void)
	{
		int x = -1, y = -1, z = 0;
		z = x++ || y++;
		printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
		return 0;

	}
	*/
	//3.
	/*
	#include<stdio.h>
	int main(void)
	{
		int x = 0, y = 0, z = 0;
		z = x++ || y++;
		printf("\n x=%d, y=%d,  z=%d", x, y, z);
		return 0;
	}
	*/
	// 4.
	/*
	#include<stdio.h>
	int  main(void)
	{
		int x = 1, y = 2, z = 0;
		z = x++ && y++;
		printf("\n x=%d, y=%d,  z=%d\n", x, y, z);
		return 0;
	}
	*/

	//5.
	/*
	#include<stdio.h>
	int main(void)
	{
		int i, j, k, l;
		i = j = k =0;
		l = i++ || (j++ && k++);
		printf("i=%d j=%d k=%d l=%d", i, j, k, l);
		return 0;
	}
	/*
	//6.

	#include<stdio.h>
	int main(void)
	{
		int i, j, k, l;
		i = j = k = 1;
		l = ++i && ++j || ++k;
		printf("i=%d j=%d k=%d l=%d", i, j, k, l);
		return 0;
	}
	*/

	/*
	//7.
	#include<stdio.h>
	int main()
	{
	int i, j, k, l;
	i = j = k =0;
	l = i++ || j++ || k++;
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);
	return 0;
	}
	*/

	//8.
	/*
	#include<stdio.h>
	int main(void)
	{
	int i, j, k, l;
	i = j = k = -1;
	l = ++i && ++j || ++k;
	printf("i=%d j=%d k=%d l=%d", i, j, k, l);
	return 0;
	}
	*/




	/*9. #include<stdio.h>
	int main(void)
	{
		int i;
		i = 10;
		i = 2 * ++i + --i;
		printf("%d\n", i);
		return 0;
	}*/

	/* 
	10.

	#include<stdio.h>
	int main(void)
	{

	int i = (3, 4, 5), j = (++i, i++, i++, ++i, ++i);
	printf("i=%d j=%d\n ", i, j);
	return 0;
	}*/

	}
	*/

#include <stdio.h>
int main(void)
{
	int i, j;

	for(i=j=1; i<5 , j<9; i++, j+=2);
	{
		printf("%d %d\n", i + j);
	}
		return 0;
}


1. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222};
    int *ptr = arr;
    ++*ptr; //++(*ptr).
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}
//Precedence of prefix ++ and * is same.
//Associativity of both is right to left.
//The expression ++*ptr has two operators of same precedence,
//so compiler looks for assoiativity.
//Associativity of operators is right to left.
//Therefore the expression is treated as ++(*ptr).
//Therefore the output of first program is " arr[0] = 112, arr[1] = 222, *ptr = 112"

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


12. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222};
    int *ptr = arr;
    *ptr++; // *(ptr++)
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}
//the expression *ptr++ is treated as *(ptr++)
//as the precedence of postfix ++ is higher than *.
//Therefore the output of second program is “arr[0] = 111, arr[1] = 222, *ptr = 222“.



13. #include <stdio.h>
int main(void)
{
    int arr[] = {111, 222,333,444,555};
    int *ptr = arr;
    *++ptr;
    printf("arr[0] = %d, arr[1] = %d, *ptr = %d", arr[0], arr[1], *ptr);
    return 0;
}

/*The expression *++ptr has two operators of same precedence, 
so compiler looks for assoiativity. 
Associativity of operators is right to left. 
Therefore the expression is treated as *(++ptr). 
Therefore the output of second program is “arr[0] = 111, arr[1] = 222, *ptr = 222“.
*/





