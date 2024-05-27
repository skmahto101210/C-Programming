// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattter\n");
    scanf("%d", &w);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 5 * w; i++)
    {
        for (int j = 0; j < 5 * w; j++)
        {
            if ((j > w - 1 && i > w - 1 && i < 5 * w - w && j < 5 * w / 2) || (j > 5 * w / 2 - 1 && i > w - 1 && i < 5 * w / 2 - w / 2) || (i > 5 * w / 2 + (w - 1) / 2 && i < 5 * w - w && j < 5 * w - w && j > 5 * w / 2 - 1))
            {
                printf("  ");
            }
            else if (i == 0 && (j == 0 || j == 5 * w - 1) || i == 5 * w - 1 && (j == 0 || j == 5 * w - 1) || (i == 5 * w / 2 - w / 2 && j == 5 * w - 1) || (i == 5 * w / 2 - w / 2 && j == 5 * w / 2))
            {
                printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}