#include <stdio.h>
/*
 * main function entry of code
 * return 0 when sucessful
 * displays lower case letters in reverse
 */
int main(void)
{
/* int main displays lower and upper case letters in reverse */
	int n = 122;

	while (n >= 97)
	{
	putchar(n);
	n--;
	}
	putchar('\n');
	return (0);
}