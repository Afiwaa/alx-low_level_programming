#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int m, n;

	for (n = '1'; n <= '10'; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}

