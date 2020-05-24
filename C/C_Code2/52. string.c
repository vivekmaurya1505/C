#include <stdio.h>
#include<string.h>
#define LEN 40
int main( void )
{
	//string
	char city1[LEN]="pune"; // \0 added at end
	char city2[]="karad"; // \0 added at end

	char city3[]={'p', 'u','n','e', '\0'};
	char city4[LEN]={'K', 'a','r','a', 'd', '\0'};
	// array of char
	char city5[]={'K', 'a','r','a', 'd', 'p','u','n', 'e'};

	printf("\n length of %s is %d", city1, strlen(city1));
	printf("\n size of %s is %d", city1, sizeof(city1));

	printf("\n length of %s is %d", city2, strlen(city2));
	printf("\n size of %s is %d", city2, sizeof(city2));

	printf("\n length of %s is %d", city3, strlen(city3));
	printf("\n size of %s is %d", city3, sizeof(city3));

	printf("\n length of %s is %d", city4, strlen(city4));
	printf("\n size of %s is %d", city4, sizeof(city4));


	printf("\n length of %s is %d", city5, strlen(city5));
	printf("\n size of %s is %d", city5, sizeof(city5));

	printf("\n Enter City1 :: ");
	//scanf("%s", city1); // city1 is name of array (base address)
	// scan upto space
	//gets(city1); // scan upto \n new line char (single line)

	// scan sets
	//scanf("%[^.]s", city1); // scan upto . multiple lines
	//scanf("%[^*]s", city1); // scan upto *
	//scanf("%[^\n]s", city1);  //scan single line from user like gets
	//scanf("%[A-Z]s", city1); // scan upto capital letters
	//scanf("%[a-z]s", city1); // scan upto small letters
	//scanf("%[0-9]s", city1); // scan upto numbers

	printf("\n city1=%s", city1);
	//printf("\n city1= ");
	//puts(city1);

	{
		int dd, mm, yy;
		printf("\n Enter Date in DD-MM-YYYY format ::\n");
		scanf("%d%*c%d%*c%d", &dd, &mm, &yy);
		printf("\n date=%d-%d-%d", dd, mm, yy);

	}



	return 0;
}

