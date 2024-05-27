// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void setsize(int *r, int *c, ...)
{
    printf("No. of rows-");
    scanf("%d", r);
    fflush(stdin);
    printf("No. of columns-");
    scanf("%d", c);
    fflush(stdin);
}

void sete(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("e[%d][%d]-", i, j);
            scanf("%d", &a[i][j]);
            fflush(stdin);
        }
    }
}

void gete(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int ra, rb, ca, cb;
    printf("_MULTIPLICATION Of TWO MATRIX_\n\n");
    printf("Enter the size of your first matrix.\n");
    setsize(&ra, &ca);
    printf("Enter the size of your second matrix.\n");
    setsize(&rb, &cb);
    if (ca != rb)
    {
        printf("MULTIPLICATION is not possible\nbecause no. of columns of first matrix is not equal to\nno. of rows of second matrix.\n");
    }
    else
    {
        int a[ra][ca];
        printf("\nEnter the element of the first matrix.\n");
        sete(ra, ca, a);

        int b[rb][cb];
        printf("\nEnter the element of the second matrix.\n");
        sete(rb, cb, b);

        printf("\nYour first matirx is-\n");
        gete(ra, ca, a);
        printf("\nYour second matirx is-\n");
        gete(rb, cb, b);

        int c[ra][cb], s=0;
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                for (int k = 0; k < ca; k++)
                {
                    s = s + a[i][k] * b[k][j];
                }
                c[i][j] = s;
                s = 0;
            }
        }
        printf("\nAfter the multiplication the Resultant Matrix is-\n");
        gete(ra, cb, c);
    }
    return 0;
}