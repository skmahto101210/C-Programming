// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>
float power(float a, float b)
{
    float m = 1;
    
    if (b < 0)
    {
        a = (1 / a);
        b = -b;
        for (int i = 0; i < b; i++)
        {
            m *= a;
        }
    }
    else if (b > 0)
    {
        for (int i = 0; i < b; i++)
        {
            m *= a;
        }
    }

    return m;
}

int main()
{
    float p, a, b;
    printf("Enter the integer value of a & b to find the value of a raised to b(a^b).\na-");
    scanf("%f", &a);
    printf("b-");
    scanf("%f", &b);
   
    p = power(a, b);
   
    if (b > 0)
    {
        printf("The value of %.0f raised to %.0f (%.0f^%.0f) is %.0f.", a, b, a, b, p);
    }
    else
    {
        printf("The value of %.0f raised to %.0f (%.0f^%.0f) is %f.", a, b, a, b, p);
    }

    return 0;
}