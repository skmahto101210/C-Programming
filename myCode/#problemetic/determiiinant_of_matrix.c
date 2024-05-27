// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

void insertele(int r, float a[][r])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("e[%d][%d]-", i, j);
            scanf("%f", &a[i][j]);
            fflush(stdin);
        }
    }
}
void UpperTriangular(int r, float a[][r])
{
    float ratio;
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < r; j++)
        {
            ratio = a[j][i] / a[i][i];
            for (int k = 0; k < r; k++)
            {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }
}
int main()
{
    int r;
    printf("____DETERMINANT_Of_MATRIX____.\n");
    printf("\nEnter the size(row X col) of the matrix.\n");
    printf("   rows/col-");
    scanf("%d", &r);
    fflush(stdin);

    float mat[r][r], det = 1;
    printf("\nEnter the elment of the matrix.\n");
    insertele(r, mat);
    UpperTriangular(r, mat);
    for (int i = 0; i < r; i++)
    {
        det *= mat[i][i];
    }
    printf("\nThe Determinant value of the matrix is %0.3f.", det);

    return 0;
}