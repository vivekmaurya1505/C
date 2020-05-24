#include<stdio.h>
int main(void)
{
	{
		printf("\n int data type :: \n");
		int z=3;
		//int *z_ptr=&z;
		int *z_ptr=NULL;
		z_ptr=&z;
		printf("\n z=%d *(&z)=%d *z_ptr=%d", z, *(&z), *z_ptr);
		printf("\n &z=%u z_ptr=%u &z_ptr=%u", &z, z_ptr, &z_ptr);
		printf("\n sizeof(z_ptr)=%d", sizeof(z_ptr));
		printf("\n sizeof(z)=%d", sizeof(z));
		*z_ptr=10; // *(1000)=10;
		printf("\n z=%d *(&z)=%d *z_ptr=%d", z, *(&z), *z_ptr);
		printf("\n z_ptr=%u z_ptr+1=%u (int pointer)", z_ptr, z_ptr+1);
		printf("\n z_ptr=%u z_ptr-1=%u (int pointer)", z_ptr, z_ptr-1);

		printf("\n z_ptr=%u z_ptr+5=%u (int pointer)", z_ptr, z_ptr+5);
		printf("\n z_ptr=%u z_ptr-5=%u (int pointer)", z_ptr, z_ptr-5);

		//printf("\n z_ptr=%u z_ptr*5=%u (int pointer)", z_ptr, z_ptr*5);
		//printf("\n z_ptr=%u z_ptr/5=%u (int pointer)", z_ptr, z_ptr/5);

	}
	printf("\n========================================================\n");
	{
		printf("\n char data type :: \n");
		char z='A';
		//char *z_ptr=&z;
		char *z_ptr=NULL;
		z_ptr=&z;

		printf("\n z=%c *(&z)=%c *z_ptr=%c", z, *(&z), *z_ptr);
		printf("\n &z=%u z_ptr=%u &z_ptr=%u", &z, z_ptr, &z_ptr);
		printf("\n sizeof(z_ptr)=%d", sizeof(z_ptr));
		printf("\n sizeof(z)=%d", sizeof(z));
		*z_ptr='B'; // *(1000)='B;
		printf("\n z=%c *(&z)=%c *z_ptr=%c", z, *(&z), *z_ptr);
		printf("\n z_ptr=%u z_ptr+1=%u (char pointer)", z_ptr, z_ptr+1);
		printf("\n z_ptr=%u z_ptr-1=%u (char pointer)", z_ptr, z_ptr-1);

		printf("\n z_ptr=%u z_ptr+5=%u (char pointer)", z_ptr, z_ptr+5);
		printf("\n z_ptr=%u z_ptr-5=%u (char pointer)", z_ptr, z_ptr-5);
	}

	printf("\n========================================================\n");
	{
		printf("\n float data type :: \n");
		float z=3.234f;
		//float *z_ptr=&z;
		float *z_ptr=NULL;
		z_ptr=&z;

		printf("\n z=%f *(&z)=%f *z_ptr=%f", z, *(&z), *z_ptr);
		printf("\n &z=%u z_ptr=%u &z_ptr=%u", &z, z_ptr, &z_ptr);
		printf("\n sizeof(z_ptr)=%d", sizeof(z_ptr));
		printf("\n sizeof(z)=%d", sizeof(z));

		*z_ptr=1.2f; // *(1000)=1.2f;
		printf("\n z=%f *(&z)=%f *z_ptr=%f", z, *(&z), *z_ptr);
		printf("\n z_ptr=%u z_ptr+1=%u (float pointer)", z_ptr, z_ptr+1);
		printf("\n z_ptr=%u z_ptr-1=%u (float pointer)", z_ptr, z_ptr-1);
		printf("\n z_ptr=%u z_ptr+5=%u (float pointer)", z_ptr, z_ptr+5);
		printf("\n z_ptr=%u z_ptr-5=%u (float pointer)", z_ptr, z_ptr-5);

	}

	return 0;
}
