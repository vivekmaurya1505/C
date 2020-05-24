 #include <stdio.h>
int main(void)
{
	const float pi=3.142f;
	float *ptr=&pi;

	//pi=3.152;
	//pi++;
	//++pi;
	//--pi;
	//pi--;
	//pi+=10;
	//pi-=10;
	//pi*=10;
	//pi/=10;

	printf("\n pi=%f *ptr=%f", pi, *ptr);
	//pi=3.152f; // not allowed as pi is const
	*ptr=3.152f;
	printf("\n pi=%f *ptr=%f", pi, *ptr);

    return 0;
}
