#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers from
 * 0 to 9
 *
 * Returns: returns nothing
 */

void print_numbers(void)
{
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
