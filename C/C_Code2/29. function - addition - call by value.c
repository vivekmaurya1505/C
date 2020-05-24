#include <stdio.h>
//1. function decl or prototype of functions
//output Funtion_Name(input);
//return_type function_name(data_type var1,...);
//float addition(float n1, float n2);  // global function decl

int main(void)
{
	float addition(float n1, float n2);  // local decl
	float no1, no2, ans;

	printf("\n Enter No1 :: ");
	scanf("%f", &no1);

	printf("\n Enter No2 :: ");
	scanf("%f", &no2);

	ans=addition(no1, no2); // 3. function call
	// no1 , no2 are actual arguments

	printf("\n in main  %f [%u] + %f[%u] =%f[%u]", no1,&no1, no2, &no2,  ans, &ans);


	return 0;
}
//2. function defination -- implementation of fun (logic)
// n1, n2 are formal arguments


float addition(float n1, float n2)
{
	float temp=0;
	temp=n1+n2;
	printf("in addition function n1=%f [%u] n2=%f[%u]=%f[%u]",n1,&n1,n2,&n2,temp,&temp);
	return temp;
}
