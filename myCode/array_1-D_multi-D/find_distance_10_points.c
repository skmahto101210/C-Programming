// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float dist(int n, float a[n][2])
{
    float s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s = s + pow(pow((a[i][0] - a[i + 1][0]), 2) + pow((a[i][1] - a[i + 1][1]), 2), 0.5);
    }
    return s;
}
int main()
{
    int n;
    printf("__Distance_between2end_Points___\n");
    printf("How many points you have for which you want to\nfind distance of path passes through the points.\n");
    scanf("%d", &n);
    fflush(stdin);
    float points[n][2];
    printf("Enter the co-ordinates of %d points.\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("x%d[%d][%d]-", i + 1, i, j);
                scanf("%f", &points[i][j]);
                fflush(stdin);
            }
            else
            {
                printf("y%d[%d][%d]-", i + 1, i, j);
                scanf("%f", &points[i][j]);
                fflush(stdin);
            }
        }
    }

    printf("\n%0.3f is Distance of the path which passes through these consecutive points.\n", dist(n, points));
    printf("Point No.     x          y\n");
    for (int i = 0; i < n; i++)
    {
        printf("%4d        %5.2f      %5.2f\n",i+1,points[i][0],points[i][1]);
    }
    
    return 0;
}