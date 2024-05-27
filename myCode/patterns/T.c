// Date- 08/01/2023
// Author- Saksham_Mahto
#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 3*w; i++)
    {
        for (int j = 0; j < 3*w; j++)
        {
            if (w % 2 != 0)
            {
                if ((j < 3*w / 2 - w / 2 || j > 3*w / 2 + w / 2) && i > w - 1)
                    printf("  ");
                else
                    printf("* ");
            }
            else
            {
                if ((j < 3*w / 2 - w / 2 || j > 3*w / 2 + w / 2 - 1) && i > w - 1)
                    printf("  ");
                else
                    printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}