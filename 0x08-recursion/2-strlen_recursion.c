#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string pointer
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s != '\0')
	{
		len = (1 + _strlen_recursion(s + 1));
	}
	return (len);
}
