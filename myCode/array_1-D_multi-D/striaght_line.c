// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

float sumofsqr(int x, int y, float a[10][2])
{
    float s = 0;
    for (int i = 0; i < 10; i++)
    {
        s = s + a[i][x] * a[i][y];
    }
    return s;
}

float mean(int j, float a[10][2])
{
    float s = 0;
    for (int i = 0; i < 10; i++)
    {
        s = s + a[i][j];
    }
    return s / 10;
}
int main()
{
    float data[10][2] = {3, 1.5, 4.5, 2, 5.5, 3.5, 6.5, 5, 7.5, 6, 8.5, 7.5, 8, 9, 9, 10.5, 9.5, 12, 10, 14};
    printf("Following are the set of points given by (x,y)\nfit a straight line given by y = a + bx\nPoint No.    x      y\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%4d", i + 1);
        printf("       %4.1f   %4.1f  ", data[i][0], data[i][1]);

        printf("\n");
    }

    float a, b;
    b = (10 * sumofsqr(0, 1, data) - 10 * mean(0, data) * 10 * mean(1, data)) / (10 * sumofsqr(0, 0, data) - 10 * mean(0, data) * 10 * mean(0, data));
    a = mean(1, data) - b * mean(0, data);


    for (int i = 0; i < 10; i++)
    {

        if (data[i][1] != a + b * data[i][0])
        {
            printf("%d is not fit in line y = a + bx\n",i+1);
        }
    }

    return 0;
}