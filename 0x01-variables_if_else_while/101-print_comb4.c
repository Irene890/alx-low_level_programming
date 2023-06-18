#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 when successful
 */
int main(void)
{
	int n;
	int m;
	int b;

	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (b = m + 1; b < 10; b++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((b % 10) + '0');
				if (n == 7 && m == 8 && b == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
