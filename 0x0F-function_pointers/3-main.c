#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - displaythe result
 * @argc: no argum
 * @argv: arra t the arg
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int k1, k2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k1 = atoi(argv[1]);
	op = argv[2];
	k2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && k2 == 0) ||
	    (*op == '%' && k2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(k1, k2));

	return (0);
}
