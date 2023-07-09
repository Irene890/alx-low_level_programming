#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 when successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
