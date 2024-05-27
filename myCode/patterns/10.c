// Date- 17/12/22
// Author- Saksham_Mahto

#include <stdio.h>

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

int main()
{
    int n, b = 0, r = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the size of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + i; j++)
            {
                if (j < n - i - 1 || b)
                {
                    printf(" ");
                    b = 0;
                }
                else
                {

                    printf("%d", fact(i) / (fact(r) * fact(i - r)));
                    b = 1;
                    r++;
                }
            }
            printf("\n");
            r = 0;
            b = 0;
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}