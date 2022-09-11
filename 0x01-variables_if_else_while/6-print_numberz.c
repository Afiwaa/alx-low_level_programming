#include <stdio.h>

/**
 * main - Print single digit numbers
 * Return: returns 0
 */
int main(void)
{
	int k;
	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}

