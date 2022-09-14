#include "main.h"

/**
 * _islower -  checks for lowercase characters
 * @c: is the int will use for argument of function
 * Return: 0
 */

int _islower(int c)
{
	for (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

