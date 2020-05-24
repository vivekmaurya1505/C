#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[], char *envp[])
{
	int no1, no2, ans;
	char op;

	if(argc!=4)
	{
		printf("invalid Arguments ");
		printf("\n ProgName no1 op no2 ");
				// a.out  11  +  12 == 23
		         // 0      1  2   3
	}
	else
	{
		no1= atoi(argv[1]);
		op= *argv[2];//op= argv[2][0];
		no2= atoi(argv[3]);

		switch(op)
		{
			default : printf("\n invalid operator ");
					  return 0;
			case '+' : ans= no1+no2; break;
			case '-' : ans= no1-no2; break;
			case '*' : ans= no1*no2; break;
			case '/' : ans= no1/no2; break;

		}
		printf("\n %d %c %d =%d", no1, op, no2, ans);
	}
	return 0;
}
