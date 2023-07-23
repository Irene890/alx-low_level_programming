#include <stdio.h>
int main ()
{
	int m[5];

	m[0]=10;
	m[1]=20;
	m[2]=30;
	m[3]=40;
	m[4]=50;

	printf("Value of 'm[0]' is %d\n",m[0]);
	printf("Value of m[1] is %d\n",m[1]);
	printf("Value of m[2] is %d\n",m[2]);
	printf("Size of Array is %d\n",m[5]);
	printf("Size of Array is %lu\n",sizeof(m));

	printf("Address of m[0] is %p\n",&m[0]);

	return(0);
}
