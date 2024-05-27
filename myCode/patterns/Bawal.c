// Date- 17/12/22
// Author- Saksham_Mahto
// _________________________sandglass clock shape___________________________
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
        for (int i = 0; i < n / 2 + 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((j == n / 3 - i || j == n / 3 + i || j == 2 * n / 3 - i || j == 2 * n / 3 + i) && i < n / 4)
                {
                    printf("@ ");
                }
                else if ((j == n / 3 - i || j == 2 * n / 3 + i) && i != n / 3)
                {
                    printf("@ ");
                }
                else if ((j == 0 || j == n / 3 || j == 2 * n / 3 || j == n - 1) && i == n / 3)
                {
                    printf("@ ");
                }
                else if ((j == i - n / 3 || j == n/2-i/2-1 || j == i || j == 2*n/3-i/3 || j == n-i/3-1) && i > n / 3)
                {
                    printf("@ ");
                }
                else
                    printf("  ");
            }
            printf("\n");
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}