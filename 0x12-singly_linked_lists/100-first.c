#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - display
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\n");
	printf("I bore my house upon my back!\n");
}
