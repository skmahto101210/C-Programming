// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float fun1(float x, int a)
{
    float m = 1;
    for (int i = 0; i < a; i++)
    {
        m *= (x);
    }
    return m;
}

int fun2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fun2(n - 1);
    }
}

int main()
{
    float x, sinx = 0;

    printf("Enter the number(x) to evaluate sin(x).\nx- ");
    scanf("%f", &x);

    for (int i = 0; i < 19; i += 2)
    {
        sinx += (pow(-1, (i + 1) / 2) * (fun1(x, i + 1) / fun2(i + 1)));
    }

    printf("\nsin(%f) = %f", x, sinx);
    return 0;
}