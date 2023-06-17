#include <stdio.h>
/* main - describes the starting of the code */
/*
 * Code displays the alphabet in lower case letters
 */
int main(void)
{
int n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
