// Date- 17/12/22
// Author- Saksham_Mahto
// _________________________Triangle Pattern of numbers___________________________
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
            for (int j = 0; j < i + 1; j++)
            {
                if (i % 2 == 0)
                {
                    printf("%d ", i * (i + 1) / 2 + j + 1);
                }
                else
                    printf("%d ", i * (i + 1) / 2 + (i + 1) - j);
            }
            printf("\n");
        }

        printf("\nAre you want to Run again press Y|y otherwise N|n\n");
        scanf("%c", &ch);
        fflush(stdin);
    }

    return 0;
}