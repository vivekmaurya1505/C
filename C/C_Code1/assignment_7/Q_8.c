/*Q8. Passing 1D, 2D arrays to a function
– sum, min, max of array elements
– Matrix operations
 */

#include<stdio.h>
#define r 2
#define c 3
void sum(int (*)[r][c]);
void min(int (*)[r][c]);

void max(int (*)[r][c]);
int main(){

	int arr[r][c]={{8,7,6},{5,4,1}};
	
	sum(&arr);
	min(&arr);
	max(&arr);
}


void sum(int (*p)[r][c]){
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		//	printf("\n===%d",((*p)[i])[j]);//  *(*((*p)+i)+J);
		//	printf("\t%d", *(*((*p)+i)+j));
			sum=sum+ *(*((*p)+i)+j);

		}
	}

	printf("\nsum=%d",sum);
}

void min(int (*p)[r][c]){
	int min= *(*((*p)+0)+0);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			
			if (*(*((*p)+i)+j)<min){

				min= *(*((*p)+i)+j);
				}
			}	
		}
	

	printf("\nmin=%d",min);
}


void max(int (*p)[r][c]){
        int max= *(*((*p)+0)+0);
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){

                        if (*(*((*p)+i)+j)>max){

                                max= *(*((*p)+i)+j);
                                }
                        }
                }


        printf("\nmax=%d",max);
}
