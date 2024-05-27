// Date-13.09.2022
// Author-saksham kr
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s;
    printf("Enter the lengths of three sides of the triangle.\n");
    printf("a-");
    scanf("%f", &a);
    printf("b-");
    scanf("%f", &b);
    printf("c-");
    scanf("%f", &c);
    s = (a + b + c) / 2;
    if (s * (s - a) * (s - b) * (s - c) <= 0)
    {
        printf("The triangle is INVALID.");
    }
    else
    {
        printf("The area of the triangle is %f.", sqrt(s * (s - a) * (s - b) * (s - c)));
    }
    return 0;
}