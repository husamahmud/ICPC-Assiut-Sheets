#include <stdio.h>

int main() {
    int testCase;
    scanf("%d", &testCase);
    int counter = 1;
    while (counter <= testCase) {
        int numR;
        scanf("%d", &numR);
        int x1, y1, x2, y2, max1, may1, minx2, miny2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        max1 = x1, may1 = y1, minx2 = x2, miny2 = y2;
        for (int i = 1; i < numR; i++) {
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            max1 = (max1 > x1) ? max1 : x1;
            may1 = (may1 > y1) ? may1 : y1;
            minx2 = (minx2 < x2) ? minx2 : x2;
            miny2 = (miny2 < y2) ? miny2 : y2;
        }
        if (minx2 > max1 && miny2 > may1) {
            printf("Case #%d: %d\n", counter, (minx2 - max1) * (miny2 - may1));
        } else {
            printf("Case #%d: %d\n", counter, 0);
        }
        counter++;
    }
    return 0;
}
