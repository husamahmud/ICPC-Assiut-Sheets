#include<stdio.h>

int isPalendrome(int len, unsigned long long* arr){
    if (len == 1)
        return 1;

    if (len == 2)
        if(arr[0] == arr[1])
            return 1;
        else
            return 0;


    if(arr[0] != arr[len - 1])
        return 0;

    isPalendrome(len - 2, ++arr);
}

int main(void){
    int n;
    scanf("%d", &n);

    unsigned long long arr[n];
    for (int i = 0; i < n; i++)
        scanf("%llu", arr + i);


    isPalendrome(n, arr) ? printf("YES") : printf("NO");
}
