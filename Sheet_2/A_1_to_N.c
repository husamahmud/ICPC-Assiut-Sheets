#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prompts the user to enter a number (N) and then prints all
 * numbers from 1 to N, separated by spaces.
 *
 * Return: 0 on success
 */

int main(void)
{
	int N;
	int i;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		printf("%d\n", i);
	}

	return (0);
}
