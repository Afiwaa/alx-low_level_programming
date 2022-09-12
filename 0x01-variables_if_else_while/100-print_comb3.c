#include <stdio.h>
#include <ctype.h>

/**
 * main - Print combination of two digits
 * Return: returns 0
 */

int main(void)
{
	int m;
	int n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (n != m)
			{
				putchar(m);
				putchar(n);
				if (m == '8' && n == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

