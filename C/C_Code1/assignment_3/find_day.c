#include<stdio.h>

int main()
{
	int date,year,month,m,mode,ans,y,year1;
printf("Enter a Date::Example 1 1 1970::\n");
scanf("%d",&date);
scanf("%d",&month);
scanf("%d",&year);
printf("%d-",date);
printf("%d-",month);
printf("%d",year);
year1=year;

switch(month)
{
	case 1: m=0;break;
		
	case 2: m=3;break;

	case 3: m=3;break;

	case 4: m=6;break;

	case 5: m=1;break;

	case 6: m=4;break;

	case 7: m=6;break;

	case 8: m=2;break;

	case 9: m=5;break;

	case 10: m=0;break;

	case 11: m=3;break;

	case 12: m=5;break;

	default: printf("\n invalid month") ;break;
}

mode=year%1000;
switch (year/100)
{

	case 16:y=6;break;

	case 17: y=4;break;

	case 18: y=2;break;

	case 19: y=0;break;


	case 20: y=6;break;


	default : printf("\nout of range sorry");break;

}
ans=date+m+mode+mode/4+y;
ans=ans%7;
if(month==1|| month ==2 && year1%400==0 || year1%4==0)
{
ans--;
}
switch(ans)
{


	case 0: printf("sunday");break;
	case 1: printf("monday");break;
	case 2: printf("tuesday");break;
	case 3: printf("wednesday");break;
	case 4: printf("thursday");break;
	case 5: printf("friday");break;
	case 6: printf("saturday");break;
	case -1:printf("saturday");break;
	default: printf("wrong ans");break;

}
return 0;
}
