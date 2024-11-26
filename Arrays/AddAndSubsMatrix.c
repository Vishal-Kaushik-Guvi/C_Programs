#include <stdio.h>

int main() {
    int n, m;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &n, &m);

    int matrix1[n][m], matrix2[n][m], sum[n][m], difference[n][m];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix2[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("Difference of the matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", difference[i][j]);
        printf("\n");
    }

    return 0;
}
