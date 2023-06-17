#include <stdio.h>
/**
 * main - description start of code
 * Display upper and lower case letters
 * Return: 0 if successful
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);

}
