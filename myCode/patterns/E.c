// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattter\n");
    scanf("%d", &w);
    for (int i = 0; i < 5 * w; i++)
    {
        for (int j = 0; j < 5 * w; j++)
        {
            if ((j > w - 1 && ((i > w - 1 && i < 5 * w / 2 - w / 2) || (i > 5 * w / 2 + (w - 1) / 2 && i < 5 * w - w))))
                printf("  ");
            else
            {
                if ((j > 5 * w - 5 * w / 4 && i > 5 * w / 2 - w / 2 - 1 && i < 5 * w / 2 + (w - 1) / 2 + 1))
                    printf("  ");
                else
                    printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}