#include<stdio.h>
int main()
{
unsigned char hrs,min,sec;
unsigned short n;
printf("Enter hrs:min:sec\n");
scanf("%hhd:%hhd:%hhd",&hrs,&min,&sec);
printf("%hhd:%hhd:%hhd=>%d\n",hrs,min,sec,hrs*3600+min*60+sec);//number=hrs*3600+min*60+sec

printf("\n========================================================\n");

printf("Enter number of second::\n");
scanf("%hu",&n);
	
printf("%hu:%hu:%hu\n",n/3600,n%3600/60,n%60);


return 0;
}
