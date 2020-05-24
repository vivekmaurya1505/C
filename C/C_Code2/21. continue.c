#include <stdio.h>
int main(void)
{
	int no;
	/*for(no=65; no<=122; no++) // print all 65 to 122
	{
		printf("\n %d - %c", no, no);
	}*/

	/*for(no=65; no<=122; no++) // print 65 to 90
	{
		if( no>=91 && no<=96)
			break;
		printf("\n %d - %c", no, no);
	}*/
	/*for(no=65; no<=122; no++) // print 65 to 90 && 97 to 122
	{
		if( no>=91 && no<=96)
			continue; // goto next iteration (ince/ decre)
		printf("\n %d - %c", no, no);
	}*/
	/*for(no=65; no<=122; no++) // print 65 to 90 && 97 to 122
	{
		if( !(no>=91 && no<=96))
			printf("\n %d - %c", no, no);
	}*/

	for(no=65; no<=122; no++) // print 65 to 90 && 97 to 122
	{
		if( no>=91 && no<=96)
		;
		else
			printf("\n %d - %c", no, no);
	}
	return 0;
}
