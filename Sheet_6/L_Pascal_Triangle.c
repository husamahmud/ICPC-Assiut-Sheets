#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int triangle[n][n];
    /*
    [0][0]
    [1][0]  [1][1]
    [2][0]  [2][1]  [2][2]
    [3][0]  [3][1]  [3][2]  [3][3]
    ....
    */

    // Initialize the triangle with all elements as 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // Print the triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
