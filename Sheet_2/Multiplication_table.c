#include <stdio.h>

/**
 * main - entry point 
 *
 * @n the number prompted from the user 
 * 
 * Return: always 0 (in success)
 */

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 12; ++i) 
	{
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}
