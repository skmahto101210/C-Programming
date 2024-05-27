// Date-14.09.2022
// Author-saksham kr
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, thetha;
    printf("Enter the Cartesian co-ordinates(x,y)\n");
    scanf("%f", &x);
    printf(",");
    scanf("%f", &y);

    r = sqrt((x * x) + (y * y));

    if (x >= 0 && y >= 0)
    {
        thetha = atan(y / x);
    }
    else if (x < 0 && y >= 0)
    {
        thetha = 3.14 + atan(y / x);
    }
    else if (x < 0 && y < 0)
    {
        thetha = -(3.14 - atan(y / x));
    }
    else if (x >= 0 && y < 0)
    {
        thetha = atan(y / x);
    }

    printf("The polar co-ordinates(r,0)\nr= %f\n0= %f\n", r, thetha);
    return 0;
}