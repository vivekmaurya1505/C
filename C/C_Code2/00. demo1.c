#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{

	{
		int no1, no2;
		printf("Enter no1 and no2 :: ");
		//scanf("Enter no1 and no2 %d%d", &no1, &no2);
		scanf("%d%d", &no1, &no2);
		printf("\n no1= %d no2=%d", no1, no2);
	}
	return 0;
	{
	printf(" = %d\n", printf("\n welcome \t to \t sunbeam "));
	}
	return 0;
	{
		int no= 100;
		printf("\\a = %d \n", '\a');
		printf("\\b = %d \n", '\b');
		printf("\\t = %d \n", '\t');
		printf("\\n = %d \n", '\n');

		printf("\\r = %d \n", '\r');

		printf("\n no=%d (decimal)" , no);
		printf("\n no=%o (octal)", no);
		printf("\n no=%x (hex)", no);

		printf("\n no=%d ", 0100);

	}
	return 0;
	{
		int no1, no2;
		char ch;

	/*	printf("\n Enter char :: ");
		scanf("%c", &ch); */


		printf("\n Enter No1 ::");
		scanf("%d", &no1);
		printf("\n Enter No2 ::");
		scanf("%d", &no2);

		printf("\n Enter char :: ");
		getchar(); // ignores one char
		scanf("%c", &ch);
		//scanf("%*c%c", &ch); // %*c ignores one char

		printf("\n no1=%d &no1=%u", no1, &no1);
		printf("\n no2=%d &no2=%u", no2,&no2 );
		printf("\n ch=%c ch=%d &ch=%u", ch, ch, &ch);
	}
	return 0;
	{
		short int a=300, b=300,ans=0;
		ans=a*b;
		printf("%d *%d =%d", a, b, ans);
	}
	return 0;
	{
		int ans=0, x=11, y=3;
		ans=x/y;
		printf("ans=%d", ans);
		float ans1=0;
		ans1=x/y;
		printf("\n ans1=%f", ans1);
		ans1=(float)x/y; // type casting
		printf("\n ans1=%f", ans1);
		ans1=x/3.0f;
		printf("\n ans1=%.2f", ans1);
		printf("\n ans1=%.5f", ans1);
		printf("\n ans1=%.0f", ans1);


	}
	return 0;
	{

		printf(" %-5d int ", sizeof(int));
		printf("\n %-5d float", sizeof(float));
	}
	return 0;
	{
	printf("\n int %%d %d %d to %d",sizeof(int), INT_MIN, INT_MAX);

	}

	return 0;
	{
		char ch;
		int no=10;
		printf("sizeof (10)=%d sizeof(10.2)=%d",sizeof(10), sizeof(10.2));
		printf("\n sizeof (10.2f)=%d sizeof(10.2F)=%d",sizeof(10.2f), sizeof(10.2F));

		printf("\nsizeof(ch)=%d",sizeof(ch));
		printf("\nsizeof('A')=%d",sizeof('A'));
		printf("\n no=%d", no);
		printf("\n sizeof(no)=%d", sizeof(no--));
		printf("\n no=%d", no);
	}


	exit(0);//return 0;


	printf("welcome to Sunbeam \n");
	printf("'welcome to Sunbeam'\n");
	printf(" \" welcome to Sunbeam \" \n");
	printf(" \' welcome to Sunbeam \' \n");
	printf(" \\ welcome \t to Sunbeam\b \a");


	return EXIT_SUCCESS;
}
