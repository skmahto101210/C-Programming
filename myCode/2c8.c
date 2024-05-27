// Date-15.09.22
// Author-sakshamkr
#include <stdio.h>
#include <math.h>

int main()
{
    float l1, l2, g1, g2, D;
    printf("Enter the latitude(L1,L2).\nL1-");
    scanf("%f", &l1);
    printf("L2-");
    scanf("%f", &l2);
    printf("Enter the longitude(G1,G2).\nG1-");
    scanf("%f", &g1);
    printf("G2-");
    scanf("%f", &g2);

    D = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("The distance(D) between them in nautical miles.\nD- %f", D);
    return 0;
}