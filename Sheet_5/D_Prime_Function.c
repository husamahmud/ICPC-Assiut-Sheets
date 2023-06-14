#include<stdio.h>
#include<math.h>


int isPrime(unsigned int n){
    if (n == 0 || n == 1)
        return 0; 

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int main(void)
{
    unsigned short int n;
    scanf("%hu", &n);
    for (unsigned short i = 0; i < n; i++){
        unsigned int x;
        scanf("%u", &x); 

        if (isPrime(x))
            printf("YES");
        else
            printf("NO");

        if (i != n - 1)
            printf("\n");
    }
}
