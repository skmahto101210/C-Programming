// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Entre the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 3 * w; i++)
    {
        for (int j = 0; j < 3 * w; j++)
        {
            if ((j > w - 1 && j < 3 * w - w) && (i < w || i > w * 3 - w - 1))
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}