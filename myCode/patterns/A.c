// Date- 08/01/2022
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 3 * w; i++)
    {
        for (int j = 0; j < 3 * w + i + w; j++)
        {
            if (j < 3*w - i - w + 2 || ((j > 3*w - i+1 && j < 3*w + i) && (i < 3*w / 2 || i > 3*w/ 2 + w - 1)))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
