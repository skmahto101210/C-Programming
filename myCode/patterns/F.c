// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the Width of pattern\n");
    scanf("%d", &w);
    for (int i = 0; i < 5 * w; i++)
    {
        for (int j = 0; j < 5 * w; j++)
        {

            if ((j > w - 1) && ((i > w - 1 && i < 5 * w / 2 - w / 2) || (i > 5 * w / 2 + (w - 1) / 2)))
                printf("  ");
            else if ((i > 5 * w / 2 - w / 2 - 1 && i < 5 * w / 2 + (w - 1) / 2 + 1) && j > 5 * w - 5 * w / 4)
                printf("  ");
            else
                printf("# ");
        }
        printf("\n");
    }
    return 0;
}