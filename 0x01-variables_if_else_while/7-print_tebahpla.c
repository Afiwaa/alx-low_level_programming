#include <stdio.h>

/**
 * main - Print lowercase in reverse
 * Return: returns 0
 */

int main(void)
{
	int j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

