#include <stdio.h>

/**
 * main - Fizz buzz code
 * Returns: returns 0
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j < 100)
		{
			if (j % 3 == 0 && j % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (j % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (j % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", j);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}
		
