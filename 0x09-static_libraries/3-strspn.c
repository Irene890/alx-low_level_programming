#include "main.h"
#include <string.h>

/**
 * _strspn - Function
 * @s: character
 * @accept: character
 * Return: returns strspn
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
