#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int char_to_digit(char c);
char digit_to_char(int digit);
long long basex_to_decimal(char *number, int basex);
void decimal_to_basex(long long number, int basex);

/**
 * main - Entry point
 *
 * Description: If t = 1 then Convert n from base x to decimal
 *              If t = 2 then Convert n from decimal to base x
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int t, x;
	char n[100];

	scanf("%d %s %d", &t, n, &x);
	if (t == 1)
	{
		long long decimal = basex_to_decimal(n, x);

		if (decimal > 0)
			printf("%lld\n", decimal);
	}
	else if (t == 2)
	{
		long long decimal = atoll(n);

		if (decimal > 0)
			decimal_to_basex(decimal, x);
	}

	return (0);
}

/**
 * char_to_digit - returns the corresponding decimal value
 * for a digit character in base 10
 * @c: the character to be converted
 *
 * Description: function takes a single character c as input
 * and returns its corresponding digit value in base 10
 *
 * Return: the decimal value of the input character
 * or -1 if the input character is not valid
 */
int char_to_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 10);
}

/**
 * digit_to_char - converts a decimal value to its corresponding
 * single digit character in base X
 * @digit: the decimal value to be converted
 *
 * Description: function takes a decimal value (digit) as input and returns
 * its corresponding single digit character
 *
 * Return: single digit character corresponding to the input decimal value
 */
char digit_to_char(int digit)
{
	if (digit >= 0 && digit <= 9)
		return (digit + '0');
	else if (digit >= 10 && digit <= 35)
		return (digit - 10 + 'A');
}

/**
 * basex_to_decimal - converts a number in base X to decimal
 * @number: the input number as a string
 * @basex: the base of the input number
 *
 * Description: this function takes a number in base X, and the base (basex) of
 * the input number, and returns the decimal equivalent of the input number
 *
 * Return: The decimal equivalent of the input number
 * or -1 if the input is invalid.
 */
long long basex_to_decimal(char *number, int basex)
{
	long long result = 0;
	int i, len = strlen(number);

	for (i = 0; i < len; i++)
	{
		int digit = char_to_digit(number[i]);

		if (digit < 0 || digit >= basex)
			return (-1);

		result += digit * pow(basex, len - i - 1);
	}
	return (result);
}

/**
 * decimal_to_basex - converts a decimal number to base X
 * @number: The decimal number to be converted
 * @basex: The base to convert the decimal number to
 *
 * This function takes a decimal number (number) as input
 * and converts it to its corresponding representation in base X
 *
 * Return: void
 */
void decimal_to_basex(long long number, int basex)
{
	char buffer[100];
	int i = 0;

	while (number > 0)
	{
		int digit = number % basex;

		buffer[i++] = digit_to_char(digit);
		number /= basex;
	}

	if (i == 0)
		printf("0\n");
	else
	{
		for (int j = i - 1; j >= 0; j--)
			printf("%c", buffer[j]);

		printf("\n");
	}
}
