#include<stdio.h>
int main()
{
int k,y,q,i=4,x=4,p=4;
k=i++;
printf("\nk= %d    i=     %d ",k,i);
k=++i;

printf("\nk= %d    i=     %d ",k,i);

y=x++*10;


printf("\nx= %d    y=     %d ",x,y);

y=++x*10;

printf("\nx= %d    y=     %d ",x,y);

q=p--/3;


printf("\np= %d    q=     %d ",p,q);
q=--p/3;

printf("\np= %d    q=     %d ",p,q);


















return 0;
}
