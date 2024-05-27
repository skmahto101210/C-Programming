// Date- 17/12/22
// Author- Saksham_Mahto
// _________________________Dimond/rhombus of number1___________________________
#include <stdio.h>

int main()
{
    int n, r = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the rows(max 5) of the Pattern\n");
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
                    printf("%d", ++r);
            }
            printf("\n");
            r = 0;
        }
        for (int i = n; i > 1; i--)
        {
            for (int j = 0; j < i + n - 2; j++)
            {
                if (j < n - i + 1)
                {
                    printf(" ");
                }
                else
                    printf("%d", ++r);
            }
            printf("\n");
            r = 0;
        }
        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}