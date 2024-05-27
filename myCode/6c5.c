// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    float i, y, x;
    int n = 0;
    printf("The approximate level of intelligence of a person can be calculated using formula-\n");
    printf("i = 2 + (y + 0.5x)\n\n");
    printf("Following are the table of the value y,x and i -\n");
    printf("S.no     y       x         i\n");

    for (y = 0; y < 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2.0 + (y + 0.5 * (x + 1));

            if (n <= 8)
            {
                printf("%d      %3.0f      %2.1f      %3.3f\n", n + 1, y + 1.0, x, i);
            }
            else
            {
                if ((n + 1 > 9 && n + 1 < 16) || (n + 1 > 24 && n + 1 < 31) || (n + 1 > 39 && n + 1 < 46) || (n + 1 > 54 && n + 1 < 61) || (n + 1 > 69 && n + 1 < 76) || (n + 1 > 84 && n + 1 < 91))
                {
                    printf("%d      %2.0f      %2.1f     %0.3f\n", n + 1, y + 1.0, x, i);
                }
                else
                {
                    printf("%d      %2.0f      %2.1f      %2.3f\n", n + 1, y + 1.0, x, i);
                }
            }
            n++;
        }
    }
    return 0;
}