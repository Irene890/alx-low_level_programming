#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
