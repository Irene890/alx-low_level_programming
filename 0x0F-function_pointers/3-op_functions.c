#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - diaply sum
 * @a: first no
 * @b: second no
 * Return: sum of a,b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - diaply difference of two nos
 * @a: first no
 * @b: second no
 * Return: difference of a, b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - evaluates product of two nos
 * @a: first no
 * @b: second no
 * Return: product of a,b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Evaluates division of two nos
 * @a: first no
 * @b: second no
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Evaluates remainder of the division
 * @a: first no
 * @b: second no
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
