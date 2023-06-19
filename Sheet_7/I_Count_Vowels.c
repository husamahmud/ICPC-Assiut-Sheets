#include<stdio.h>
#include<string.h>

int isVowel(char c){
	return c == 'a' || c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u'
	       || c == 'A' || c == 'E' ||  c == 'I' ||  c == 'O' ||  c == 'U';
}

int countVowels(char* str, unsigned long len){
    if (len == 1) // base case
        return isVowel(str[0]);

    return isVowel(str[0]) + countVowels(++str, len - 1);
}

int main(void){
    char str[200];

    scanf("%[^\n]s", str);
    printf("%d",countVowels(str, strlen(str)));
}
