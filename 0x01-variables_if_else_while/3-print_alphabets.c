#include <stdio.h>
#include <unistd.h>

/**
 * main - Printing both uppercases and lowercases
 * Return: return 0
 */
int main(void)
{
	char m;
	char p;
	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}

