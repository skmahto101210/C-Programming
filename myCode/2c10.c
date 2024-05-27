// Date-15.09.22
// Author-Saksham_Mahto

#include <stdio.h>
#include <math.h>

int main()
{
    float Theta;
    printf("Enter an angle(in degree) to find all Trigonometric ratios.\n");
    scanf("%f", &Theta);
    Theta = 3.14159 / 180 * Theta;
    printf("sin(%0.3f)- %0.3f\n", Theta, sin(Theta));
    printf("cos(%0.3f)- %0.3f\n", Theta, cos(Theta));
    printf("tan(%0.3f)- %0.3f\n", Theta, tan(Theta));
    printf("cosec(%0.3f)- %0.3f\n", Theta, 1 / sin(Theta));
    printf("sec(%0.3f)- %0.3f\n", Theta, 1 / cos(Theta));
    printf("cot(%0.3f)- %0.3f\n", Theta, 1 / tan(Theta));
    return 0;
}