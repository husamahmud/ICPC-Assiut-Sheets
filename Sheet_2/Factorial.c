#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number
 *
 * @n : The number to calculate the factorial of
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

/**
 * main - entry point to the program
 *
 * @t : The number of
 * Return: always 0 (on success)
 */

int main()

{
	int t;
	int i;

	printf("enter number from 1 to 15:");

	scanf("%d", &t);

	while (t > 15)
	{
		printf("error, enter valid number from 0 t0 15:");
		scanf("%d", &t);
	}

	for (i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);

		while (n > 20)
		{
			printf("error, enter valid number from 0 t0 20:");
			scanf("%d", &n);
		}

		int f = factorial(n);
		printf("%d\n", f);
	}

	return 0;
}
