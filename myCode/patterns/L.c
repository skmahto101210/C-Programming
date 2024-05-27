// Date-  26.01.2023
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN\n\n");
    for (int i = 0; i < 3 * w; i++)
    {
        for (int j = 0; j < 3 * w - w / 2; j++)
        {
            if (j > w - 1 && i < 3 * w - w)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}