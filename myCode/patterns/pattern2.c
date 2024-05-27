// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n, b = 0;
    printf("Enter the row of the pattern\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + i; j++)
        {
            if (j < n - i - 1 || b)
            {
                printf(" ");
                b = 0;
            }
            else
            {
                if ((i + j) % 2 == 0)
                {
                    printf("%d", (i + j) % 2);
                    b = 1;
                }
                else
                {
                    printf("%d", (i+1) % 2);
                    b = 1;
                }
            }
        }
        printf("\n");
        b = 0;
    }

    return 0;
}