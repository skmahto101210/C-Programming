// Date-17.09.22
// Author-saksham kr
#include <stdio.h>
#include "myfuns.c"

int main()
{
    float w, r, g, b;
    float c, m, y, k;
    printf("Enter the Value of RGB(0 to 255).\nR-");
    scanf("%f", &r);
    printf("G-");
    scanf("%f", &g);
    printf("B-");
    scanf("%f", &b);
    if (r == 0 && b == 0 && c == 0)
    {
        c == m == y == 0;
        k = 1;
    }
    else
    {
        /* code */
        // printf("R/255=%f.\n,G/255= %f.\n,B/255= %f.\n", r / 255, g / 255, b / 255);
        float q[] = {(r / 255.0), (g / 255.0), (b / 255.0)};
        w = max(q, 3);
        c = ((w - r / 255) / w);
        m = ((w - g / 255) / w);
        y = ((w - b / 255) / w);
        k = 1 - w;
    }
    // printf("White(max of R/255,G/255,B/255)= %f.\n", w);
    printf("\nAfter the conversion from RGB into CMYK you get.\n");
    printf("   RGB        CMYK\nR-%.3f   C-%.5f\nG-%.3f   M-%.5f\nB-%.3f   Y-%.5f\n            K-%.5f", r, c, g, m, b, y, k);

    return 0;
}