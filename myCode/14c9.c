// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void cirshift(int *a)
{
    int t;
    for (int i = 0; i < 4; i++)
    {
        t = a[4 - i];
        a[4 - i] = a[4 - i - 1];
        a[4 - i - 1] = t;
    }
}

int main()
{
    int p[5] = {15, 30, 28, 19, 61}, n;
    printf("Old array p[5] = { ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", p[i]);
    }
    printf("%d }", p[4]);

    printf("\nHow many times you want to shift it circularly left.\n");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        cirshift(p);
        printf("\nAfter %d circular left shifting the new array p[5] = { ", i + 1);
        for (int j = 0; j < 4; j++)
        {
            printf("%d, ", p[j]);
        }
        printf("%d }", p[4]);
    }

    int a[4][5];
    printf("\n\nEnter the element in the (4 x 5)matrix and get its rows left shifted.\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("e[%d][%d]-", i, j);
            scanf("%d", &a[i][j]);
            fflush(stdin);
        }
    }

    printf("\nHow many times you want to shift it's rows circularly left.\n");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        cirshift(a[0]);
        cirshift(a[1]);
        cirshift(a[2]);
        cirshift(a[3]);
        printf("\nAfter %d rows circular left shifting the new matrix is-\n", i + 1);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("%4d", a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}