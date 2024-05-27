// Date- 17/12/22
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n, b = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the size(max 9x9) of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        if (n < 10)
        {
            printf("\nPATTERN :-\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j <= n + i; j++)
                {
                    if (j < n - i - 1 || b)
                    {
                        printf(" ");
                        b = 0;
                    }
                    else
                    {
                        printf("%d", i + 1);
                        b = 1;
                    }
                }
                printf("\n");
            }
        }
        else
            printf("\n___WRONG_INPUT____\nSize should be less than or equal to 9x9\n");
        printf("\nAre want to Run again Press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }
    return 0;
}