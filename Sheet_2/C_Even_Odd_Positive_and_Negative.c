#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * Description: this program prompts numbers from user and counts
 * how many of these values are even, odd, positive
 * and negative.
 *
 * @n: The number of values
 * @values: The array of values
 * 
 * Return: 0 on success
 */

int numcounters(int n, int values[]);

int numcounters(int n, int values[])
{
	int i;
	int even = 0;
	int odd = 0;
	int positive = 0;
	int negative = 0;

	for (i = 0; i < n; i++)
	{
		
		if (values[i] % 2 == 0)
			even++;
		else
			odd++;
		
		if (values[i] < 0)
			negative++;
		else if (values[i] > 0)
			positive++;
	}

	printf("Even: %d\n", even);
	printf("Odd: %d\n", odd);
	printf("Positive: %d\n", positive);
	printf("Negative: %d\n", negative);
}

int main(void)
{
	int n;
	int i;

	printf("enter the numbers of values:\n");
	scanf("%d", &n);

	int values[n];

	printf("Enter the values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &values[i]);
	}

	numcounters(n, values);

	return (0);
}
