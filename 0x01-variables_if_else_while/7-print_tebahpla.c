#include <stdio.h>
/**
 * main - function entry of code
 * Return: 0 when sucessful
 * displays lower case letters in reverse order
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
	putchar(n);
	n--;
	}
	putchar('\n');
	return (0);
}
