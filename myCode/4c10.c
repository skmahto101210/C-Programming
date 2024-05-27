// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

int main()
{
    float a, s;
    printf("Enter the angle(in degree).\n");
    scanf("%f", &a);
    
    s = pow(sin(a), 2) + pow(cos(a), 2);
    (s == 1) ? printf("The sum of squares of sine and cosine of this angle is equal to 1.") : printf("The sum of squares of sine and cosine of this angle is NOT equal to 1.");
// however I also know that the sum of squares of sine and cosine of angle is always equal to 1.
// so, I also code this way
//      printf("The sum of squares of sine and cosine of this angle is equal to 1.");
// Because 's' is always TRUE.
    
    return 0;
}