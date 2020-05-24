// PROGRAM TO SOLVE LINEAR EQUATIONS IN THREE VARIABLES USING MATRICES

#include<stdio.h>

#define m(x) (x+1)%3
#define n(x) (x+2)%3
int cross(int,int,int,int);

int main()

{

int a[3][3],c[3];
int x[3]={0,0,0};
int i,j;

printf(" \n Enter the elements of matrix A :");



for (i=0;i<3;i++)
{

 for (j=0;j<3;j++)
   { 
	scanf("%d",&a[i][j]);

   }

}


printf("\n Enter the constants :");

for ( i=0;i<3;i++)

{
scanf("%d",&c[i]);
}



// To calculate Determinant of matrix



 int det;

det = a[0][0]*cross(a[1][1],a[2][2],a[1][2],a[2][1]) - a[0][1]*cross(a[1][0],a[2][2],a[2][0],a[1][2]) + a[0][2]*cross(a[1][0],a[2][1],a[1][1],a[2][0]);


printf("\n The determinant of the matrix is : %d",det);


if (det == 0.00)

{ printf("\n The linear equations are inconsistent");

}


// Cofactor of matrix



int z[3][3];
 
printf(" \n The cofactor matrix is : ");

 for( i=0;i<3;i++)
 { printf("\n");
   for(j=0;j<3;j++)
   { 
    z[i][j] = a[m(i)][m(j)]*a[n(i)][n(j)] - a[m(i)][n(j)]*a[n(i)][m(j)];
    printf("\t%d",z[i][j]);

   }
 }


// Adjoint of matrix by taking Transpose of matrix Z


printf(" \n The Adjoint matrix is : ");
float t[3][3];

 
 for( i=0;i<3;i++)
 { printf("\n");
   for(j=0;j<3;j++)
   { 
    t[i][j] = z[j][i];
    printf("\t%f",t[i][j]);
    }
 }

// Calculating Inverse of matrix by dividing each element of adjoint by det value


printf(" \n The Iverse of  matrix is : ");
 float Inv[3][3];
 
 
 for( i=0;i<3;i++)
 { printf("\n");
   for(j=0;j<3;j++)
   {
    Inv[i][j] =  (t[i][j])/det;
    printf("\t%f",Inv[i][j]);
    }

 } 

 // Multiplying inv of matrix A and constant matrix to get unknown value x,y,z matrix
 // X = (invA)*C


for ( i=0;i<3;i++)
 { 
   for (j=0;j<3;j++)
   {  x[i]+=Inv[i][j]*c[j];

   }
 }  

printf("\n The solutions of the equations are :\n");
printf("\n \t x = %d",x[0]);

printf("\n \t y = %d",x[1]);

printf("\n \t z = %d",x[2]);
return 0;

}

int cross(int a,int b,int c, int d)
{ 
 return (a*b-c*d);
}
