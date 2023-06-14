#include<stdio.h>

int insideCircle(float x, float y, float r, float x1, float y1) {
    float tx = x - x1;
    float ty = y - y1;
    float distance = (tx * tx) + (ty * ty);
    float radiusSquared = r * r;

    return radiusSquared >= distance;
}

int main(void){
    float x, y, r;
    int n;
    scanf("%f %f %f %d", &x, &y, &r, &n);

    for(int i = 0; i < n; i++){
        float x1, y1;
        scanf("%f %f", &x1, &y1);
        insideCircle(x,y,r,x1,y1) ? printf("YES\n") : printf("NO\n");
    }

}
