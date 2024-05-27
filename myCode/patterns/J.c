// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN\n\n");
    for (int i = 0; i < 4 * w; i++)
    {
        for (int j = 0; j < 4 * w; j++)
        {
            if ((j == 0 && i == 4 * w - 1) || (j == 4 * w - w - 1 && i == 4 * w - 1) || (j < w && i < 4 * w - 2 * w + 1) || (j > w - 1 && j < 4 * w - 2 * w && i > w - 1 && i < 4 * w - w) || (j > 4 * w - w - 1 && i > w - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}