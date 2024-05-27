// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>
void setsize(int *r, int *c)
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
            printf("a[%d][%d]-", i, j);
            scanf("%d", (*(a + i) + j));
            fflush(stdin);
        }
    }
}

void getelement(int r, int c, int a[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ra, ca, cb, rb;

    printf("Enter the size of your first matrix\n");
    setsize(&ra, &ca);

    printf("Enter the size of your second matrix\n");
    setsize(&rb, &cb);

    if (ra != rb && ca != cb)
    {
        printf("ADD is not possible\n");
    }
    else
    {
        int a[ra][ca];
        
        printf("Enter the element of first matrix-\n");
        sete(ra, ca, a);

        int b[rb][cb];

        printf("Enter the element of first matrix-\n");
        sete(rb, cb, b);

        printf("\nYour first matrix is-\n");
        getelement(ra, ca, a);
        printf("\nYour second matrix is-\n");
        getelement(rb, cb, b);
        
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < ca; j++)
            {
                b[i][j] = a[i][j] + b[i][j];
            }
        }
        
        printf("\nAfter ADD first and second matrix the resultant Matrix is-\n");
        getelement(rb, cb, b);
    }
    return 0;
}