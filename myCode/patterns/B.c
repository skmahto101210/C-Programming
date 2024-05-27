// Date- 08/02/2023
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    for (int i = 0; i < 5 * w; i++)
    {
        for (int j = 0; j < 5 * w; j++)
        {
            if (j == 5 * w - 1 && (i == 0 || i == 5 * w - 1) || ((j > w - 1 && j < 5 * w - w) && ((i > w - 1 && i < 5 * w / 2 - w / 2) || (i < 5 * w - w && i > 5 * w / 2 + (w - 1) / 2))))
            {
                printf("  ");
            }
            else
            {
                if (w % 2 != 0 && j == 5 * w - 1 && i == 5 * w / 2||(w % 2 == 0 && j == 5 * w - 1 && (i == 5 * w / 2 - 1 || i == 5 * w / 2)))
                {
                    printf("  ");
                }
                else
                    printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}