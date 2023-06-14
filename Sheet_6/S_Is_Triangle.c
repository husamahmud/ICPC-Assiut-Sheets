#include<stdio.h>
#include<math.h>

float areaOfTriangle(float a, float b, float c){
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(void){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    int condition = (a+b>c) && (b+c>a) && (c+a>b);
    condition ? printf("Valid\n%f", areaOfTriangle(a,b,c)) : printf("Invalid");
}
