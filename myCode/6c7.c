// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

int main()
{
    float x, log = 0;
    printf("Natural logarithm can be approximate by the following series.\n\n");
    printf("(x-1/x) + 0.5(x-1/x)^2 + 0.5(x-1/x)^3 +.....\n\n");
    printf("Enter the number to find natural logarithm .\n");
    scanf("%f", &x);
    log = (x - 1) / x;
    for (int i = 0; i < 6; i++)
    {
        log += 0.5 * pow(((x - 1) / x), i + 2);
    }
    printf("The value of log of %f is %f", x, log);
    return 0;
}