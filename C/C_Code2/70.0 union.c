#include<stdio.h>
union testUnion
{
	short int num;
	char ch[2];
};
int main()
{
	union testUnion ut;
	ut.ch[0]=4;
	ut.ch[1]=4;
	printf("%d", ut.num);
	return 0;
}

A. 4
B. 44
C. 1028
D. 516
Answer: C
