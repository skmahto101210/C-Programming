// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>

int main()
{
    int r, s = 0, skew = 0;
    printf("Enter the size of your square matrix(A)\n");
    scanf("%d", &r);
    fflush(stdin);
    int A[r][r];
    if (r < 2)
    {
        printf("_wrong input_\n");
    }
    else
    {
        printf("Enter the element(must be int) of the matrix(A) to find the matrix is Symmetric or Skew-Symmetric.\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                printf("A[%d][%d]-", i, j);
                scanf("%d", (*(A + i) + j));
                fflush(stdin);
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i != j)
                {
                    if (i < j && A[i][j] == A[j][i])
                    {
                        s++;
                    }
                    else if (i < j && A[i][j] == -A[j][i])
                    {
                        skew++;
                    }
                }
                if (i == j && A[i][j] == 0)
                {
                    skew++;
                }
            }
        }

        if (s == 3)
        {
            printf("Matrix A is a Symmetric.\n");
        }
        else if (skew == 6)
        {
            printf("Matrix A is a Skew-Symmetric.\n");
        }
        else
        {
            printf("Matrix A is not Symmetric or Skew-Symmetric.\n");
        }
    }
    return 0;
}
