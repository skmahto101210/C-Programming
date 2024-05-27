// Date-
// Author- Saksham_Mahto

#include <stdio.h>
int C(int n, int r)
{
    if (r == 0)
        return 1;
    else
        return n * C(n - 1, r - 1) / r;
}

int main()
{
    int r, b = 0;
    printf("Enter the row of the pascal's Triangle\n");
    scanf("%d", &r);
    fflush(stdin);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0, k = 0; j < r + i; j++)
        {
            if (j < r - i - 1 || b)
            {
                printf(" ");
                b = 0;
            }
            else
            {
                printf("%d", C(i, k));
                k++;
                b = 1;
            }
        }
        printf("\n");
        b = 0;
    }

    return 0;
}