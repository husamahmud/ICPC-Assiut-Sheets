#include <stdio.h>

/**
 * is_prime - Check if a number is prime or not
 *
 * @x: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime(int x)

{
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int x;
	scanf("%d", &x);

	if (is_prime(x))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}
