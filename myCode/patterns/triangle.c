// Date- 17/12/22
// Author- Saksham_Mahto
// _________________________* triangle in #___________________________
#include <stdio.h>

int main()
{
    int n;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the rows of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n * 2 - 1; j++)
            {
                if (j == n - i - 1 || j == n + i - 1)
                {
                    printf("*");
                }
                else
                    printf("#");
            }
            printf("\n");
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}