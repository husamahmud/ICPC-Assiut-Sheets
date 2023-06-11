#include<stdio.h>
#include<math.h>

double eucledianDistance(double x1, double y1, double x2, double y2){
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt((dx*dx)+(dy*dy));
}

int main(void){
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    printf("%.9f", eucledianDistance(x1, y1, x2, y2));
}
