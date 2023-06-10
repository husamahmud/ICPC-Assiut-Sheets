#include<stdio.h>
#include<math.h>

void printPrimeFactors(unsigned long n) {   
    int flag = 0;
    for(int i = 2; i<=n/2; i++){ 
        int c = 0;
        while(n % i == 0){
            c++;
            n /= i;
        }

        if(c> 0 && flag > 0)
            printf("*");
        
        if(c > 0){
            printf("(%d^%d)", i, c);
            flag = 1;
        }
        if(n == 1) break;
    }
    // To  handle the case one number left
    if(n > 1 && flag){
        // Why we separete? to handle if the i/p is only one prime (we want the result to be (7^1) not *(7^1))
        printf("*");
    }
    if(n > 1){
        printf("(%lu^1)", n);
    }
}

int main() {
    unsigned long N;
    scanf("%lu", &N);

    printPrimeFactors(N);
    return 0;
}
