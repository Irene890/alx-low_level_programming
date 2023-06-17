#include <stdio.h>
/**
 * main - describes the starting of the code
 * Return: displays 0 when success
 * Code displays the alphabet in lower case
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
