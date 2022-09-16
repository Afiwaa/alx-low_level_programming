#include "main.h"
#include <stdio.h>

/**
 * print_square - Print squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
