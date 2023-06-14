#include <stdio.h>
#include <stdlib.h>

/**
 * find_biggest_number - Find the maximum number from an array of N integers
 * @nums: Array of N integers
 * @n: Number of integers in the array
 *
 * Return: The maximum number among the N integers
 *
 */


int find_biggest_number(int nums[], int n)
{
	int i, biggest_num = nums[0];

	for (i = 1; i < n; i++)
	{
		if (nums[i] > biggest_num)
		{
			biggest_num = nums[i];
		}
	}

	return biggest_num;
}

int main(void)
{
	int i;
	int n;
	unsigned int *nums;

	printf("enter the numers of values:");
	scanf("%d", &n);

	nums = malloc(n * sizeof(unsigned int));

	if (!nums)
	{
		return EXIT_FAILURE;
	}

	printf("enter the values:");	

	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}

	int Max = find_biggest_number(nums, n);
	printf("%d", Max);

	free(nums);
	return (0);
}
