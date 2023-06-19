#include <stdio.h>

/*
 * main - entry point to the program
 *
 * This program prompts the user to enter a number (N) and then prints all
 * even numbers form 1 to N
 *
 * Return : 0 on success
 */

int main(void)
{
	int n;
	int i;
	int counter = 0;

	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);		
			counter = 1;
		}
		
	}

	if (counter == 0)
		{
			printf("-1");
		}

	return (0);
}
