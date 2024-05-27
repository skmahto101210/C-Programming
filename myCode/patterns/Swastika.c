// Date- 17/12/22
// Author- Saksham_Mahto
                                //  it takes more time than 25.c because it print space in first quadrent of swastika\n.
#include <stdio.h>

int main()
{
    int n, b = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    { 
        printf("Enter the Odd size(max 111) of the Swastika\n");
        scanf("%d", &n);
        fflush(stdin);
        if (n % 2 != 0)
        {
            printf("\nPATTERN :-\n");
            for (int i = 0; i < n / 2 + 1; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((j > 0 && j < n / 2 || j > n / 2) && i != n / 2)
                    {
                        if (j > n / 2 - 1 && i == 0)
                        {
                            printf("* ");
                        }
                        else
                            printf("  ");
                    }
                    else
                        printf("* ");
                }
                printf("\n");
            }
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((j < n / 2) || j > n / 2 && j < n - 1)
                    {
                        if (j < n / 2 && i == n / 2 - 1)
                        {
                            printf("* ");
                        }
                        else
                            printf("  ");
                    }
                    else
                        printf("* ");
                }
                printf("\n");
            }
            printf("\nAre you want to Run again press Y|y otherwise N|n\n");
            scanf("%c", &ch);
            fflush(stdin);
        }
        else
            printf("____please!_Enter Odd size____\n");
            
    }
    return 0;
}