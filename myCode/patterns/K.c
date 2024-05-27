// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int w;
    printf("Enter the width of the pattern\n");
    scanf("%d", &w);
    fflush(stdin);
    if (w % 2 == 0)
    {
        printf("    !You entered Even width\n     "
               "please enter ODD width!\n\n");
        main();
    }
    printf("\nPATTERN:-\n\n");
    for (int i = 0; i < 3 * w; i++)
    {
        for (int j = 0; j < 3 * w + 1; j++)
        {
            if ((j > w - 1) && (((j < 3 * w - i - w + 1 || j > 3 * w - i) && i < 3 * w / 2) || (i > 3 * w / 2 - 1 && (j > (i + 1) || j < i - 3 * w / 2 + w))))
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}