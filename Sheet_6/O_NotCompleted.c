#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char num[100];
	scanf("%s", num);

	char big_integer1[100];
	strcpy(big_integer1, num);

	char big_integer2[] = "9999";

	char sum[100];
	char product[100];

	int carry = 0;
	int i = strlen(big_integer1) - 1;
	int j = strlen(big_integer2) - 1;
	int k = 0;
	while (i >= 0 || j >= 0 || carry != 0)
	{
		int sum_digits = carry;
		if (i >= 0)
			sum_digits += big_integer1[i--] - '0';
		if (j >= 0)
			sum_digits += big_integer2[j--] - '0';
		carry = sum_digits / 10;
		sum[k++] = sum_digits % 10 + '0';
	}

	int zeros_needed = strlen(big_integer2) - k;
	while (zeros_needed-- > 0)
		sum[k++] = '0';
	sum[k] = '\0';
	printf("%s\n", sum);
}
