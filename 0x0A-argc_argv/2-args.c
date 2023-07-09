#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
