// Date-
// Author- Saksham_Mahto

#include <stdio.h>

double power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, --y);
}
int main()
{
    int x, y;
    double pow;
    printf("Enter value of X,Y for finding X raised to the power of Y\nX- ");
    scanf("%d", &x);
    printf("Y- ");
    scanf("%d", &y);
    pow = power(x, y);
    printf("%d raised to the power %d is %0.3lf", x, y, pow);

    return 0;
}