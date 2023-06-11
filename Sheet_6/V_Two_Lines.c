#include<stdio.h>

int main(void){
    int x1, y1, x2, y2;
    int x1_2, y1_2, x2_2, y2_2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x1_2, &y1_2, &x2_2, &y2_2);

    int xx1 = x2 - x1;
    int yy1 = y2 - y1;

    int xx2 = x2_2 - x1_2;
    int yy2 = y2_2 - y1_2;

    if(xx1 * yy2 == xx2 * yy1)
        printf("YES");
    else
        printf("NO");
}
