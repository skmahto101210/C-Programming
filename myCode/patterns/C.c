// Date-
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
        for (int j = 0; j < 3 * w; j++)
        {
            if (((j == 3 * w - 1 || j == 0) && (i == 0 || i == 3 * w - 1)) || (j > w - 1 && i > w - 1 && i < 3 * w - w))
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}