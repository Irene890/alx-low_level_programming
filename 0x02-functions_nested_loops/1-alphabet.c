#include "main.h"
/**
 * main - prints the alphabet
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
