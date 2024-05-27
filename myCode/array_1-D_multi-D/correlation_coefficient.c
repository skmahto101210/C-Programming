// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float sumd(int j, float a[11][2])
{
    float s = 0;
    for (int i = 0; i < 11; i++)
    {
        s = s + a[i][j];
    }
    return s;
}

float sumofsqr(int x, int y, float a[11][2])
{
    float s = 0;
    for (int i = 0; i < 2; i++)
    {
        s = s + a[i][x] * a[i][y];
    }
    return s;
}

int main()
{
    float data[11][2] = {34.22, 102.43,
                         39.87, 100.93, 41.85, 97.43, 43.23, 97.81, 40.06, 98.32, 53.29, 98.32, 53.29, 100.07, 54.14, 97.08, 49.12, 91.59, 40.71, 94.85, 55.15, 94.65};
    printf("Following the set of 11 data point(x,y).\n     x       y\n");
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("  %6.2f ", data[i][j]);
        }
        printf("\n");
    }

    float n, m;

    n = (sumofsqr(0, 1, data) - sumd(0, data) * sumd(1, data));
    m = pow((11.0 * sumofsqr(0, 0, data) - pow(sumd(0, data), 2)) * (11.0 * sumofsqr(1, 1, data) - pow(sumd(1, data), 2)), 0.5);

    printf("\nThe correlation coefficient of above data is %f\n", n / m);

    return 0;
}