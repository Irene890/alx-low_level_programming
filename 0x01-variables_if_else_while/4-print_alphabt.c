#include <stdio.h>
/**
 * main - function shows starting
 * point of code
 * Return: funtion shows zero when successful
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
	}
	putchar('\n');
	return (0);

}
