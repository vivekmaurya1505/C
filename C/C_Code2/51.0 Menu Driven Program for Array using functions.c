#include <stdio.h>
#define SWAP(a, b, type){ type temp; temp=a; a=b; b=temp;}
#define SIZE 5
//void ReadArray(int a[SIZE], int size);
void ReadArray(int a[], int size); // array notation
void PrintArray(int *a, int size);// pointer notation
//void PrintArray(int a[], int size);
void PrintRev(int *a, int size);
int ArraySum(int a[], int size);
int ArrayMax(int *a, int size);
void ArrayMaxMin(int *a, int size, int *pMax, int *pMin);
void RevArray(int a[], int size);
void swap(int *n1, int *n2);
int MenuOperations();
int LinearSearch(int *a, int size ,int key); // return position
int* SeqSearch(int *a, int size ,int key); // return address

int main( void )
{
	int arr[ SIZE ], choice, ans, ans1, find, *ptr=NULL;


	do
	{
			ans= ans1=0;
			choice= MenuOperations();
			switch(choice)
			{
				default :
						printf("\n invalid case :: ");
						continue;

				case 1: // Accept Array elements
						printf("\n Enter Elements of array1 :: ");
						ReadArray(arr,SIZE);
						break;

				case 2: // print all elements of array
						printf("\n Elements of array :: \n");
						PrintArray(arr, SIZE);
						break;

				case 3 :// print rev
						printf("\n Elements of array :: \n");
						PrintArray(arr, SIZE);
						printf("\n Array in Rev :: ");
						PrintRev(arr, SIZE);
						break;

				case 4:// sum of array
						PrintArray(arr, SIZE);

						ans= ArraySum(arr, SIZE);
						printf("\n Array sum=%d",ans);
						break;

				case 5:// Max of array
						PrintArray(arr, SIZE);
						ans= ArrayMax(arr, SIZE);
						printf("\n Max of Array =%d",ans);
						break;
				case 6:// max min array
						PrintArray(arr, SIZE);
						ArrayMaxMin(arr, SIZE, &ans, &ans1);
						printf("\n Max of array =%d ", ans);
						printf("\n Min of array =%d ", ans1);
						break;

				case 7:// rev array
						printf("\n Elements of array :: \n");
						PrintArray(arr, SIZE);
						RevArray(arr, SIZE);
						printf("\n Elements of array in Rev Order :: \n");
						PrintArray(arr, SIZE);
						break;

				case 8://  find elements in array
						printf("\n Enter Element to search :: ");
						scanf("%d", &find);
						ans = LinearSearch(arr, SIZE, find);
						if( ans==-1)
							printf("\n %d is not found in array ", find);
						else
							printf("%d is found in array at %d position", find, ans);

						break;
				case 9://  find elements in array return address
						printf("\n Enter Element to search :: ");
						scanf("%d", &find);
						ptr = SeqSearch(arr, SIZE, find);
						if( ptr==NULL)
							printf("\n %d is not found in array ", find);
						else
							printf("%d is found in array at %d position", find, ptr-arr);
						                                                   //arr= 100
						                                                   // ptr=108  ptr-arr= (108-100)/4(scale factor)
						                                                   //8/4==2
						break;

				case 0: // exit

						return 0;// exit(0);
			}

			printf("\n Enter 1 to Continue or 0 to Exit :: ");
			scanf("%d", &choice);

	}while(choice!=0);

	return 0;
}
int* SeqSearch(int *a, int size ,int key) // retrun address if found
{
	int index;
	for( index=0; index<size; index++)
	{
		if( *(a+index)== key)//if( a[index]== key)
		return (a+index);     //return &a[index]; // return address
	}
	return NULL;// if not found return NULL
}

int LinearSearch(int *a, int size ,int key) // find position if present
{
	int index;
	for( index=0; index<size; index++)
	{
		if( a[index]== key)
			return index; // return position after find
	}
	return -1;// any -ve
}
void swap(int *n1, int *n2)
{
	int temp=0;
	temp=*n1;
	*n1=*n2;
	*n2=temp;

	return;
}
void RevArray(int a[], int size)
{
	int indexi, indexj, temp;

//	for(indexi=0 ,indexj=size-1 ;indexi<size/2; indexi++, indexj-- )
//	for(indexi=0 ,indexj=size-1 ;indexi<indexj; indexi++, indexj-- )
	for(indexi=0 ,indexj=size-1 ;indexj>indexi; indexi++, indexj-- )
	{
		// 1. swap
			/*temp= a[indexi];
			a[indexi]= a[indexj];
			a[indexj]=temp;*/

		// 2 swap using function
			//swap(&a[indexi], &a[indexj]); //swap((a+indexi), (a+indexj));

		// 3. swap using macro check using .i file
		 SWAP(a[indexi], a[indexj], int);
		 //
		 //{
			// int temp; temp=a[indexi]; a[indexi]= a[indexj] ; a[indexj]=temp;
		 //}

	}
	return ;

}
void ArrayMaxMin(int *a, int size, int *pMax, int *pMin)
{
	int index, max;
	for(index=1, *pMax= *pMin= a[0]; index<size; ++index)
	{
		if( *pMax< *(a+index)) //if(max< a[index])
			*pMax= *(a+index); //max= arr[index];
		if( *pMin > *(a+index))
			*pMin= *(a+index);
	}
	return;
}
int ArrayMax(int *a, int size)
{
	int index, max;
	for(index=1, max=a[0]; index<size; ++index)
	{
		if( max< *(a+index)) //if(max< a[index])
			max= *(a+index); //max= arr[index];
	}
	return max;
}
int ArraySum(int a[], int size)
{
	int index, sum;
	for(index=sum=0; index<size; ++index)
	{
		sum+=*(a+index);//sum=sum+a[index];
	}
	return sum;
}
void PrintRev(int *a, int size)
{
	int index;
	for(index= size-1; index>=0 ; index--)
	{
		//printf("\n a[%d] %d [%u]", index, *(a+index), (a+index));
		// printf("\n a[%d] %d [%u]", index, *(index+a), (index+a));
		//printf("\n a[%d] %d [%u]", index, a[index], &a[index]);
		printf("\n a[%d] %d [%u]", index, index[a], &index[a]);
	}
	return;
}

void ReadArray(int a[], int size) // array notation
{
	int index;
	printf("\n size of a=%d", sizeof(a)); // 8 or 4 or 2
	for(index=0; index<size; index++)
	{
		printf("\n arr[%d] ::", index);
		//scanf("%d", &a[index]);
		//scanf("%d", (a+index));
		//scanf("%d", (index+a);
		  scanf("%d", &index[a]);
	}
	return ;
}
void PrintArray(int *a, int size)// pointer notation
{
	int index;

	for(index=0; index<size ; index++)
	{
		//printf("\n arr[%d] %d [%u]", index, a[index], &a[index]);
		//printf("\n arr[%d] %d [%u]", index, *(a+index), (a+index));
		//printf("\n arr[%d] %d [%u]", index, *(index+a), (index+a));
		printf("\n arr[%d] %d [%u]", index, index[a], &index[a]);
	}
	//a++; // allowed as it is pointer not array
	return;

}


int MenuOperations()
{
	int choice;
	printf("\n 1. Accept Array Elements \n 2. Print Array Elements \n 3. Print Array in Rev");
	printf("\n 4. Array Sum  \n 5. Array Max \n 6. Array Max Min  \n 7. Rev Array     ");
	printf("\n 8. Linear Search \n 9. Seq Search \n 10. Selection Sort \n 0. Exit     ");

	printf("\n Enter Your Choice:: ");
	scanf("%d", &choice);

	return choice;
}
