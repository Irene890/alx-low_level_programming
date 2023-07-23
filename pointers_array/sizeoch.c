#include <stdio.h>

int main ()
{
	int n;
	char m;
	float k;
	int *ptr;

	printf("%p\n",&n);
	printf("%p\n",&m);
	printf("%p\n",&k);
	printf("%p\n",&ptr);

	printf("%ld\n",sizeof(char));
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(float));
	printf("%lu\n",sizeof(ptr));

	return(0);
}
