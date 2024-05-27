// Date- 17/12/22
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n, b = 0;
    char ch = 'Y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the Size of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + i; j++)
            {
                if (j < n - i - 1)
                {
                    printf(" ");
                }
                else
                {
                    if (b)
                    {
                        printf("A");
                        b = 0;
                    }
                    else
                    {
                        printf("*");
                        b = 1;
                    }
                }
            }
            printf("\n");
            b = 0;
        }

        printf("\nAre you want to Run again pree Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }
    return 0;
}