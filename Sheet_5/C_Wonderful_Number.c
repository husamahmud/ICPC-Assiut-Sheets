#include<stdio.h>
#include <stdbool.h>

bool isOdd(unsigned int n){ return (n%2 != 0);}

bool isPalendrome(unsigned int n){
    // `rev` stores reverse of a binary representation of `n`
    unsigned int rev = 0;
 
    // do till all bits of `n` are processed
    unsigned int k = n;
    while (k)
    {
        // add the rightmost bit to `rev`
        rev = (rev << 1) | (k & 1);
        k = k >> 1;     // drop last bit
    }
 
    // Returns true if `reverse(n)` is the same as `n`
    return n == rev;
}

int main(void)
{
    unsigned int n;
    scanf("%d", &n);
    (isOdd(n) && isPalendrome(n)) ? printf("YES") : printf("NO");
}
