// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float dist(float n[], int a)
{
    if (a == 1)
    {
        return pow(pow((n[0] - n[1]), 2) + pow((n[3] - n[4]), 2), 0.5);
    }
    else if (a == 2)
    {
        return pow(pow((n[1] - n[2]), 2) + pow((n[4] - n[5]), 2), 0.5);
    }
    else
    {
        return pow(pow((n[2] - n[0]), 2) + pow((n[5] - n[3]), 2), 0.5);
    }
}

float are(float p[])
{
    float s, a, b, c;
    a = dist(p, 1);
    b = dist(p, 2);
    c = dist(p, 3);
    s = (a + b + c) / 2;
    if (s * (s - b) * (s - a) * (s - c) <= 0)
    {
        return 0;
    }
    else
    {
        return pow(s * (s - b) * (s - a) * (s - c), 0.5);
    }
}

void in_or_out(float p[], float x, float y)
{
    float are1[3], a;
    a = are(p);
    for (int i = 0; i < 3; i++)
    {
        p[i] = x;
        p[i + 3] = y;
        are1[i] = are(p);
    }

    if ((a == are1[0] + are1[2] + are1[1]) && are1[0] != 0.0 && are1[1] != 0.0 && are1[2] != 0.0)
    {
        printf("The point D(%0.3f,%0.3f) is INSIDE the triangle. %f\n", x, y,are1[0]);
    }
    else if ((a == are1[0] + are1[2] + are1[1]))
    {
        printf("The point D(%0.3f,%0.3f) is ON the triangle.  %f\n  ", x, y,are1[1]);
    }
    else
    {
        printf("The point D(%0.3f,%0.3f) is OUTSIDE the triangle.  %f\n", x, y,are1[2]);
    }
}

int main()
{
    float p[6], x, y;
    char c;

    printf("Enter the integer value of three co-ordinate points A(x1,y1),B(x2,y2) and C(x3,y3).\n");

    for (int i = 0, j = 0; i < 3, j < 3; i++, j++)
    {
        printf("x%d-", i + 1);
        scanf("%f", p + i);
        fflush(stdin);
        printf("y%d-", j + 1);
        scanf("%f", p + j + 3);
        fflush(stdin);
    }

    // Function for find distance between each two points.
    printf("\n1. Distance between AB is %f\n", dist(p, 1));
    printf("2. Distance between BC is %f\n", dist(p, 2));
    printf("3. Distance between AC is %f\n", dist(p, 3));

    printf("\nAre you want to find area of the Triangle if it's formed by joining line A,B and C.\nThen press Y/y otherwise press any character ");
    scanf("%c", &c);
    fflush(stdin);

    if (c == 'Y' || c == 'y')
    {
        // Function for find area the triangle.
        if (are(p) == 0)
        {
            printf("\nThe triangle is NOT formed by these three points A,B and C\n");
        }
        else
        {
            printf("\nThe area of the triangle formed by the line joining between A,B and C is %f\n", are(p));
        }
    }
    
    if (are(p) != 0)
    {
        printf("\nAre you want to find the point D(x,y) is inside,outside or on the triangle.\nThen press Y/y otherwise press any character ");
        scanf("%c", &c);
        fflush(stdin);

        if (c == 'Y' || c == 'y')
        {
            printf("\nEnter the point D(x,y) to find D is inside,outside or on the triangle.\n");
            printf("x-");
            scanf("%f", &x);
            fflush(stdin);
            printf("y-");
            scanf("%f", &y);
            fflush(stdin);
            // Function for find a point is INSIDE,OUTSIDE or ON the triangle.
            in_or_out(p, x, y);
        }
    }

    return 0;
}