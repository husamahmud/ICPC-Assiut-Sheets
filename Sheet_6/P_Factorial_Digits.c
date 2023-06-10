#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d", &n);

    double result = 0;
    for(int i = 2; i <= n; i++){
        result += log10(i);
    }
    printf("Number of digits of %d! is %d",n ,(int)result + 1);
}
