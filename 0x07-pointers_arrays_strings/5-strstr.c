#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: returns 0 if success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *y = needle;

		while (*l == *y && *y != '\0')
		{
			l++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
