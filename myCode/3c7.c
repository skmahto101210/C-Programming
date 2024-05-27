// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int A, B, C;
    printf("Enter the three angle(in degree) of the Triangle.\nFirst angle- ");
    scanf("%d", &A);
    printf("Second angle- ");
    scanf("%d", &B);
    printf("Third angle- ");
    scanf("%d", &C);
    if (A + B + C == 180)
    {
        /* code */
        printf("The triangle is valid because the sum of their three angles is 180 degree.");
    }
    else
    {
        printf("The triangle is NOT valid because the sum of their three angles is NOT 180 degree.");
    }

    return 0;
}