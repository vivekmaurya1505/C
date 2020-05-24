#include<stdio.h>
int main()
{

	int a[5]={10,20,30,40,60};
int *p=a;
//int x=5;
int *q=*(&a+1)-1;
printf("\n++%u",q);

printf("\n++%u",(a+4));
printf("\n1==%u",*p++);

printf("\n2== %u",*++p);
printf("\n3==%u",(*p)++);
printf("\n4==%u",++(*p));
printf("\n5==%u",++*p);
printf("\n6==%u",*(p++));
printf("\n7==%u",*(++p));
printf("\n8==%u ",*q--);
printf("\n9==%u",*--q);
printf("\n10==%u",--(*q));
printf("\n11==%u",--*q);
printf("\n12==%u",(*q)--);
printf("\n13==%u",*(q--));
printf("\n14==%u",*(--q));


















return 0;
}
