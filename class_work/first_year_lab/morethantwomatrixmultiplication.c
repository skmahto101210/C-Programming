// Date- 23.01.2023
// Author- Saksham_Mahto

#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int row;
    int coloum;
    int **mat;
};

void insertall(struct matrix a)
{
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < a.coloum; j++)
        {
            printf("a[%d][%d]- ", i, j);
            scanf("%d", &a.mat[i][j]);
            fflush(stdin);
        }
    }
}
void showmat(struct matrix mat)
{
    for (int i = 0; i < mat.row; i++)
    {
        printf("\n");
        for (size_t j = 0; j < mat.coloum; j++)
        {   
            if ((i == (mat.row / 2) - 1 && j == 0)||mat.row+j==1)
                printf("Mat = ");
            else if (j == 0)
                printf("      ");
            printf("%d ", mat.mat[i][j]);
        }
    }
    printf("\n");
}
struct matrix matmulti(int r1, int c1, int c2,
                       struct matrix mat1, struct matrix mat2)
{
    struct matrix matf;
    matf.row = r1;
    matf.coloum = c2;
    matf.mat = (int **)malloc(sizeof(int *) * r1);
    for (int i = 0; i < r1; i++)
    {
        matf.mat[i] = (int *)malloc(sizeof(int) * c2);
    }
    int sum = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += mat1.mat[i][k] * mat2.mat[k][j];
            }
            matf.mat[i][j] = sum;
            sum = 0;
        }
    }
    return matf;
}

int main()
{
    printf("__Wellcome to Matrix Multiplication__\n\n");
    int n;
    printf("How many matrices you want to multiplty\n");
    scanf("%d", &n);
    fflush(stdin);
    int row_coln[n][2];
    struct matrix mats[n];
    for (int i = 0; i < n;)
    {
        printf("\n%d Matrix:-\n", i + 1);
        printf("  Rows- ");
        scanf("%d", *(row_coln + i));
        fflush(stdin);
        if (i > 0 && row_coln[i - 1][1] != row_coln[i][0])
        {
            printf("\n   !!_Worng_Input_!!\n   !!Your Rows of "
                   "%d matrix is must be equal to Coloums %d matrix!!\n\n",
                   i + 1, i);
            continue;
        }
        printf("  Coloums- ");
        scanf("%d", *(row_coln + i) + 1);
        fflush(stdin);
        mats[i].row = row_coln[i][0];
        mats[i].coloum = row_coln[i][1];
        mats[i].mat = (int **)malloc(sizeof(int *) * row_coln[i][0]);
        for (int j = 0; j < row_coln[i][0]; j++)
        {
            mats[i].mat[j] = (int *)malloc(sizeof(int) * row_coln[i][1]);
        }
        printf("\nEnter all element of %d Matrix:-\n", i + 1);
        insertall(mats[i]);
        showmat(mats[i]);
        i++;
    }
    struct matrix matf;
    matf = mats[0];
    // printf("%d  %d %d",matf.row,matf.coloum,matf.mat[0][0]);
    free(mats);
    for (int i = 0; i < n - 1; i++)
    {
        matf = matmulti(matf.row, matf.coloum, mats[i + 1].coloum, matf, mats[i + 1]);
        free(mats+i+1);
    }
    printf("\nAfter Multiplication of all matices then final matrix is:-\n");
    showmat(matf);

    return 0;
}