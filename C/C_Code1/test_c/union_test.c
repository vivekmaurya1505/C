#include<stdio.h>
union ab{
	int x;
	int y:32;
};
int main(){
	union ab t;
printf("\n %u",&t.x);
printf("\n %u",&t);

//printf("\n %u",&t.y);
}

