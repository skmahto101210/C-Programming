// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void print(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%3d", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int r, c;
    printf("For find transpose of your matrix, Enter the size of the matrix.\n");
    printf("No. of rows-");
    scanf("%d", &r);
    printf("No. of columns-");
    scanf("%d", &c);
    fflush(stdin);
    
    int A[r][c];
    
    printf("Enter the interger number in a %dx%d matrix(A) to find there Transpose(A').\n", r, c);
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d]-", i, j);
            scanf("%d", (*(A + i) + j));
            fflush(stdin);
        }
    }

    printf("Your matrix(A) is-\n");
    print(r, c, A);

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i != j)
            {
                if (j > i)
                {
                    int t;
                    t = A[i][j];
                    A[i][j] = A[j][i];
                    A[j][i] = t;
                }
            }
        }
    }
    
    printf("\nThen the Transpose matrix(A') is-\n");
    print(r, c, A);

    return 0;
}