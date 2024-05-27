// Date-15.09.2022
// Author-saksham kr
#include <stdio.h>
#include <math.h>

int main()
{
    float wcf, t, v;
    printf("Enter the value of temp.(t) in degree & wind velocity(v).\nt-");
    scanf("%f", &t);
    printf("v-");
    scanf("%f", &v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("The Wind Chill Factor - %f", wcf);
    return 0;
}