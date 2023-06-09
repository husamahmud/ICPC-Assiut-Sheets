#include<stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<math.h>
#include <stdbool.h>

struct Max_Min {
    // Return Value
    int max;
    int min;
};
int isPrime(int n){
    if (n == 0 || n == 1)
        return 0; 

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

bool isPalindrome(int n){
    // Decimal Palindrome
    int original = n;
    int reversed = 0;
    int remainder;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return (original == reversed);
}

int countPrime(int n, int *arr){
    int sum = 0;
    for(int i =0; i<n; i++)
        if(isPrime(arr[i]))
            sum++;

    return sum;
}
int countPalind(int n, int *arr){
    int sum = 0;
    for(int i =0; i<n; i++)
        if(isPalindrome(arr[i]))
            sum++;

    return sum;
}

struct Max_Min maxMin(int n, int *arr){
    int max = -INT_MAX;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    struct Max_Min result = {max, min};
    return result;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int getMaxDivisorNumber(int n, int* arr) {
    int maxDivisors = 0;
    int maxNumber = 0;

    for (int i = 0; i < n; i++) {
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors) {
            maxDivisors = divisors;
            maxNumber = arr[i];
        } else if (divisors == maxDivisors && arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }

    return maxNumber;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    struct Max_Min res = maxMin(n, arr);
    printf("The maximum number : %d\n", res.max);
    printf("The minimum number : %d\n", res.min);
    printf("The number of prime numbers : %d\n", countPrime(n, arr));
    printf("The number of palindrome numbers : %d\n", countPalind(n, arr));
    printf("The number that has the maximum number of divisors : %d", getMaxDivisorNumber(n, arr));

    free(arr);
}
