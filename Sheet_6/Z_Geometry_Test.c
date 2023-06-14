#include<stdio.h>
#include<math.h>

int main(void){
    unsigned r, s;
    scanf("%u %u", &r, &s);

    if(s >= r * 2){
        printf("Square");
	} else if(r*2 > sqrt(pow(s,2) + pow(s,2))){
        printf("Circle");
	} else {
        printf("Complex");
	}
}
