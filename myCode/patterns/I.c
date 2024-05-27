// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("enter the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 3 * w; i++)
    {
        for (int j = 0; j < 3 * w; j++)
        {
            if ((j < w || j > 3 * w - w - 1) && (i > w-1 && i < 3 * w - w))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}