// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

void fun(int a, int b, int c, int d, int e, float *sum, float *ave, float *sd)
{
    float ave1;
    *sum = (a + b + c + d + e);
    *ave = *sum / 5;
    ave1 = (a * a + b * b + c * c + d * d + e * e) / 5;
    *sd = pow(ave1 - *ave * *ave, 0.5);
}

int main()
{
    int a, b, c, d, e;
    float sum, ave, sd;

    printf("Enter 5 integer to find out sum,average and standard deviation of these numbers.\na- ");
    scanf("%d", &a);
    printf("b- ");
    scanf("%d", &b);
    printf("c- ");
    scanf("%d", &c);
    printf("d- ");
    scanf("%d", &d);
    printf("e- ");
    scanf("%d", &e);

    fun(a, b, c, d, e, &sum, &ave, &sd);

    printf("Sum = %f\nAverage = %f\nStandard Deviation = %f", sum, ave, sd);

    return 0;
}