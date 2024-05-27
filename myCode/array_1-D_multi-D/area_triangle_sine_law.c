// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float area(float *a)
{
    return 0.5 * a[0] * a[1] * sin(a[2]);
}

int main()
{
    float data[6][3] = {137.4, 80.9, 0.78,
                        155.2, 92.62, 0.89,
                        149.3, 97.93, 1.35,
                        160.0, 100.25, 9.00,
                        155.6, 68.95, 1.25,
                        149.7, 120.0, 1.75};

    printf("Given the following 6 triangular pieces of land.\n");
    printf("Plot No.      a        b        angle\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%4d        ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%6.2f   ", data[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    float m = area(data[0]);
    int n = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("The area of the Plot No. %d is %f.\n", i + 1, area(data[i]));
        if (m < area(data[i]))
        {
            m = area(data[i]);
            n = i + 1;
        }
    }
    printf("\nThe largest Area of the Plot No. is %d which is %f", n, m);

    return 0;
}