#include<stdio.h>

int main(void){
    int x1, x2, x3;
    int y1, y2, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    int r1 = (y3-y2) * (x2-x1);
	int r2 = (y2-y1) * (x3-x2);
    if(r1 == r2)
        printf("YES");
    else
        printf("NO");
}
