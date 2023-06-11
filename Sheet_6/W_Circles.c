#include<stdio.h>
#include<math.h>

int main(void){
    float x1, y1, x2, y2;
    float x3, y3, x4, y4;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    scanf("%f %f %f %f", &x3, &y3, &x4, &y4);

    double mid_x1 = (x1+x2)/2; 
	double mid_y1 = (y1+y2)/2;
	double mid_x2 = (x3+x4)/2; 
	double mid_y2 = (y3+y4)/2;

	double r1 = sqrt(pow(x1-x2,2) + pow(y1 - y2,2)) / 2;
	double r2 = sqrt(pow(x3-x4,2) + pow(y3 - y4,2)) / 2;

	double line = sqrt(pow(mid_x1- mid_x2,2) + pow(mid_y1 - mid_y2,2));
	double rr = r1 + r2;

    if(line > rr)
        printf("NO");
    else
        printf("YES");
}
