// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int det(int r, int c, int a[r][c])
{
    if (r == 2)
    {
        return ((a[r-1][c] * a[r-2][c+1]) - (a[r-1][c+1] * a[r-2][c]));
    }
    else
    {
        a[r][c] = a[r - 1][c + 1];
        return (a[r][c] * det(r - 1, c + 1, a));
    }
}

int main()
{
    int r;
    printf("____DETERMINANT_Of_MATRIX____.\n");
    printf("Enter the size(row X col) of the matrix.\n");
    printf("No. of rows/col-");
    scanf("%d", &r);
    fflush(stdin);

    fflush(stdin);
    int a[r][r];
    printf("\nEnter the elment of the matrix.\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("e[%d][%d]-", i, j);
            scanf("%d", &a[i][j]);
            fflush(stdin);
        }
    }

    int s = 0;
    for (int i = 0; i < r; i++)
    {
        s = s + det(r, i, a);
    }

    printf("\nThe Determinant value of the matrix is- %d.");

    return 0;
}