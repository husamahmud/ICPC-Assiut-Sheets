#include<stdio.h>
#include<stdbool.h>

long long n,desired;
long long arr[20];

bool check(long long sum,long index){
	if(index == n){
		 return sum == desired;
	}

	bool route1 = check(sum + arr[index], index + 1); // test the next +
	bool route2 = check(sum - arr[index], index + 1); // test the next -

	return route1 || route2; // If any of them converged
}

int main(void){
    scanf("%lld %lld", &n, &desired);

    for(int i=0;i<n;i++){
		scanf("%llu", &arr[i]);
	}

    check(arr[0], 1) ? printf("YES") : printf("NO");
}
