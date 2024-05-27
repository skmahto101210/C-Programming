// Date- 17/12/22
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n, r = 0, c = 0;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the rows of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (i % 2 == 0)
                {
                    printf("%d ", r * (r + 1) / 2 + j + 1);
                }
                else
                    printf("%c ", 64 + c * (c + 1) / 2 + j + 1);
            }
            printf("\n");
            if (i % 2 == 0)
                r++;
            else
                c++;
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}