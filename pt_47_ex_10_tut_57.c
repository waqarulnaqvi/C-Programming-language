/*
Exercise_10:
Matrix Multiplication..
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int m, n, m1, n1;
    printf("Enter number of rows of matrix 1:\n");
    scanf("%d", &m);
    printf("Enter number of columns matrix 1:\n");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter number of rows of matrix 2:\n");
    scanf("%d", &m1);
    printf("Enter number of columns matrix 2:\n");
    scanf("%d", &n1);
    int b[m1][n1], product[m][n1],sum=0;
    if (n == m1)
    {
        printf("Input values of matrix 1:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("a[%d][%d]=", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("Input values of matrix 2:\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("b[%d][%d]=", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                product[i][j]=sum;
                sum=0;
            }
        }
        printf("\nMatrix 1:\n\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix 2:\n\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix 1 X Matrix 2:\n\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix Multiplication not possible..\n");
    }

    return 0;
}