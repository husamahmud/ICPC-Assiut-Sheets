#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program reads an integer from the input and prints all positive divisors of the integer.
 * the divisor is a number that divides the integer exactly, leaving no remainder.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int div;

	scanf("%d", &n);

	for (div = 1; div <= n; div++)
	{
		if (n % div == 0)
		{
			printf("%d\n", div);
		}
	}
	return 0;
}
