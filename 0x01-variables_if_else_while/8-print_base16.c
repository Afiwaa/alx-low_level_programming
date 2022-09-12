#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 * Return: returns 0
 */

int main(void)
{
	char m;
	char n;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

