#include<stdio.h>
#include<math.h>

int max(int a, int b){
    if(a>b) return a;
    return b;
}
int min(int a, int b){
    if(a>b) return b;
    return a;
}

int main(void){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int mi_x = min(min(x1,x2) , min(x3,x4));
	int ma_x = max(max(x1,x2) , max(x3,x4));
	int mi_y = min(min(y1,y2) , min(y3,y4)); 
	int ma_y = max(max(y1,y2) , max(y3,y4));

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int x,y;
        scanf("%d %d", &x, &y);
        if(x >= mi_x && x <= ma_x && y >= mi_y && y <= ma_y){
			printf("YES\n");
		} else {
			printf("NO\n");
		}

    }
}
