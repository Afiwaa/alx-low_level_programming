#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: The number in question.
 * Returns: returns 1
 */

int print_last_digit(int n)
{
		int l = n % 10;

		if (l < 0)
		{
			l *= -1;
		}
		_putchar('0' + l);
		return (l);
}
