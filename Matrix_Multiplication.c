#include <stdio.h>
#include <stdlib.h>

void input(int m, int n, int a[m][n])
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d, %d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int m, int n, int a[m][n])
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }   
}

void multiply(int m, int n, int p, int a[m][n], int b[n][p], int c[m][p])
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int r1, c1, r2, c2;
    printf("Row And Column For First Matrix :\n");
    scanf("%d %d", &r1, &c1);
    printf("Row And Column For Second Matrix :\n");
    scanf("%d %d", &r2, &c2);

    if (r2 != c1) {
        printf("Matrices With The Given Order Cannot Be Multiplied With Each Other..!\n");
        exit(EXIT_FAILURE);
    }

    int mat1[r1][c1], mat2[r2][c2], ans[r1][c2];
    printf("Enter Elements Of The First Matrix.\n");
    input(r1, c1, mat1);
    printf("The Elements Of The First Matrix Are :\n");
    print(r1, c1, mat1);
    printf("Enter Elements Of The Second Matrix.\n");
    input(r2, c2, mat2);
    printf("The Elements Of The Second Matrix Are :\n");
    print(r2, c2, mat2);

    multiply(r1, r2, c2, mat1, mat2, ans);
    printf("The Product is :\n");
    print(r1, c2, ans);

    return EXIT_SUCCESS;
}
