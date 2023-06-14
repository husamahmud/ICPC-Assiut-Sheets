#include <stdio.h>
#include <stdlib.h>

/**
 * check_pass - checks an array of passwords for validity
 * @n: the number of passwords to check
 * @password: the array of passwords to check
 *
 * This function checks an array of passwords for validity. It iterates over
 * each password in the array and checks if it matches a hardcoded value of
 * 1999. If a password matches, it prints "Password is correct". Otherwise,
 * it prints "Password is incorrect".
 */

void check_pass(int n, int password[])
{
	int i;
	int j;

	for (int i = 0; i < n; i++)
	{
		if (password[i] == 1999)
		{
			printf("Correct\n");	
		} else {
			printf("Wrong\n");
		}
	
	}

}

/**
 * main - the entry point of the program
 *
 * This function prompts the user to input a number of passwords, then
 * dynamically allocates an array to hold those passwords. It then prompts
 * the user to input each password one by one, and stores them in the array.
 * Finally, it calls the check_pass function to check each password in the array.
 *
 * Return: Always 0 in success.
 */

int main (void)
{
	int n;
	int i;
	int *password;
	
	printf("Enter the number of passwords: ");
	scanf("%d", &n);

	password = malloc(sizeof(int)*n);

	if (!password)
	{
		printf("Error: could not allocate memory!\n");
		return EXIT_FAILURE;
	}
	
	printf("enter your password:\n");

	for ( i = 1; i < n; i++)
	{
		scanf("%d\n", &password[i]);
	}

	check_pass(n, password);
	free(password);

	return (0);
}

