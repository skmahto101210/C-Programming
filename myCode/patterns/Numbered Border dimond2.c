// Date- 17/12/22
// Author- Saksham_Mahto
// _________________________Numbered Border dimond2___________________________
#include <stdio.h>

int main()
{
    int n, b = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the rows(max 9) of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + i; j++)
            {
                if (j == n + i - 1)
                {
                    printf("%d", i + 1);
                }
                else if (j < n - 1 - i || b)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", i + 1);
                    b = 1;
                }
            }
            printf("\n");
            b = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n * 2 - i - 2; j++)
            {
                if (j == n * 2 - i - 3)
                {
                    printf("%d", n - i - 1);
                }
                else if (j < i + 1 || b)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d", n - i - 1);
                    b = 1;
                }
            }
            printf("\n");
            b = 0;
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}