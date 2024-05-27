// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

void area(int a, int b, int c)
{
    float s;
    s = (a + b + c) / 2.0;
    printf("The area of the triangle is %f", pow((s * (s - a) * (s - b) * (s - c)), 0.5));
}

int main()
{
    int a, b, c;
    
    printf("Enter the sides of the triangle.\na-");
    scanf("%d", &a);
    printf("b-");
    scanf("%d", &b);
    printf("c-");
    scanf("%d", &c);

    area(a, b, c);

    return 0;
}