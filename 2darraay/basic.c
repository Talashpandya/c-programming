#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    int minr = 0, maxr = m - 1, minc = 0, maxc = n - 1;
    int value = 1;

    while (minr <= maxr && minc <= maxc) {
        // Input minr row
        for (int j = minc; j <= maxc; j++) {
            printf("Enter value at (%d, %d): ", minr, j);
            scanf("%d", &arr[minr][j]);
            value++;
        }
        minr++;

        // Input rightmost column
        for (int i = minr; i <= maxr; i++) {
            printf("Enter value at (%d, %d): ", i, maxc);
            scanf("%d", &arr[i][maxc]);
            value++;
        }
        maxc--;

        // Input maxr row
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
                printf("Enter value at (%d, %d): ", maxr, j);
                scanf("%d", &arr[maxr][j]);
                value++;
            }
            maxr--;
        }

        // Input leftmost column
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
                printf("Enter value at (%d, %d): ", i, minc);
                scanf("%d", &arr[i][minc]);
                value++;
            }
            minc++;
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}