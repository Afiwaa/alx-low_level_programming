#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 * Return: returns 0
 */

int main(void)
{
	char m;
	char n;

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

