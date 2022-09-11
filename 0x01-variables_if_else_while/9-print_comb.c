#include <stdio.h>
#include <ctype.h>

/**
 * main - Print single digit numbers separated by comma and whitespace
 * Return: returns 0
 */

int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

