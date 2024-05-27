// Date- 17/12/22
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Enter the size of the Pattern\n");
        scanf("%d", &n);
        fflush(stdin);
        printf("\nPATTERN :-\n");

        for (int i = 0; i < n * 2; i += 2)
        {
            for (int j = 0; j < n * 2 - i - 1; j++)
            {
                if (j <= (n * 2 - i - 1) / 2)
                {
                    printf("%d ", j + 1);
                }
                else
                    printf("%d ", n * 2 - j - 1 - i);
            }
            printf("\n");
        }
        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}