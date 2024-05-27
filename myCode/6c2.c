// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{

    int n;
    float s = 0, f = 1;
    printf("S = (1/1! + 2/2! + 3/3! +......+ n/n!)\n\n");
    printf("Enter the value of 'n' for which find the sum of given series.\n\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == 1)
            {
                f = 1;
            }
            else
            {
                f = f * j;
            }
        }
        s += (i / f);
    }
    printf("The value of S is %f,%f.", s, f);

    return 0;
}