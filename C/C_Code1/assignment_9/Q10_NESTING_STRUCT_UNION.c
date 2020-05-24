/*Q10. Try out nesting of structures, unions
(a) Union inside a structure
(b) Structure/Structures inside an union
(c) Union inside another union etc.
  */

#include<stdio.h>
/*union uni{
	 double x;//8
	char ch1;
	char ch2;
	char ch3;
};// size of union is 
struct str{
	char x;
	char ch;
	union uni U1;//multiple of 8*
}S1;// size of struct is 12

int main(){

	union uni U2;
//	printf("\n size of union =%d",sizeof(U1));//wrong
	printf("\n size of union =%d",sizeof(U2));//8
	
	printf("\n size of struct =%d",sizeof(S1));//16

	printf("\n size of struct =%d",sizeof(long double));//16
	printf("\n size of struct =%d",sizeof(long int ));//8
	printf("\n size of struct =%d",sizeof(long long int));//8
}*/
//===============================================================================================
/*

struct str{
        int  x;
        char ch;
}S2;// size of struct is 8

union uni{
        char ch1;
        char ch2;
        char ch3;
	struct str S1;
};// size of union is 8
int main(){

        union uni U2;
//      printf("\n size of union =%d",sizeof(U1));//wrong
        printf("\n size of union =%d",sizeof(U2));//8
        
        printf("\n size of struct =%d",sizeof(S2));//8

}*/

//====================================================

union uni{
        int x;
        char ch2;
        char ch3;
}U1;// size of union is 4


union uni1{
	double y;
	union uni U3;
};
int main(){

        union uni1 U2;
        printf("\n size of union =%d",sizeof(U1));//4
        printf("\n size of union =%d",sizeof(U2));//8

 //       printf("\n size of struct =%d",sizeof(U3));//WRONG

}

