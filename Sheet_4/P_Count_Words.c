#include <stdio.h>
#include <string.h>

int main()
{
	char s[1000001];
	int count = 1, i;
	gets(s);

	for(i = 1; s[i]; i++)
		if(!(s[i] >= 'A' && s[i] <= 'z') && s[i+1] >= 'A' && s[i+1] <= 'z')
			count++;

	printf("%d\n", count);
}
