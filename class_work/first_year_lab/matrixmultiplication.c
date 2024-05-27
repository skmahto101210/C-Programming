// Date- 23.01.2023
// Author- Saksham_Mahto

#include <stdio.h>

void insertall(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]- ", i, j);
            scanf("%d", *(a + i) + j);
            fflush(stdin);
        }
    }
}
void showmatrix(int r, int c, int a[][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void matrix_multip(int r1, int r2, int c2, int a[][r2], int b[][c2], int c[][c2])
{
    int sum = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
}

int main()
{
    int r1, c1;
    printf("Enter Row of first matrix- ");
    scanf("%d", &r1);
    fflush(stdin);
    printf("Enter coloum of first matrix- ");
    scanf("%d", &c1);
    fflush(stdin);
    int mat1[r1][c1];
    insertall(r1, c1, mat1);
    printf("\nYour first matrix is:-\n");
    showmatrix(r1, c1, mat1);
    int r2, c2;
    while (1)
    {
        printf("Enter row of second matrix- ");
        scanf("%d", &r2);
        fflush(stdin);
        if (c1 != r2)
            printf("\n      !!wrong input\n      !!Row of second must"
           " be equal to column of first matrix!!\n\n");
        else
        {
            break;
        }
    }
    printf("Enter coloum of second matrix- ");
    scanf("%d", &c2);
    fflush(stdin);
    int mat2[r2][c2], matf[r1][c2];
    insertall(r2, c2, mat2);
    printf("\nYour second matrix is:-\n");
    showmatrix(r2, c2, mat2);
    matrix_multip(r1, r2, c2, mat1, mat2, matf);
    printf("\nAffter multiplication two matrix is:-\n");
    showmatrix(r1, c2, matf);
    return 0;
}