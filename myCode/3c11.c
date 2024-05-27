// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, r, x1, y1;
    printf("Enter co-ordinates(a,b) of center of a circle and its radius(r).\nCenter(x,y)-\n");
    scanf("%d%d", &a, &b);
    printf("Radius-");
    scanf("%d", &r);
    printf("Your Circle of center (%d,%d) and radius %d.\nEnter a point(x1,y1).\n", a, b, r);
    scanf("%d%d", &x1, &y1);
    if ((pow((x1 - a), 2) + pow((y1 - b), 2) - pow(r, 2)) > 0)
    {
        printf("The point(%d,%d) is OUTSIDE the circle.", x1, y1);
    }
    else if ((pow((x1 - a), 2) + pow((y1 - b), 2) - pow(r, 2)) == 0)
    {
        printf("The point(%d,%d) is ON the circle.", x1, y1);
    }
    else
    {
        printf("The point(%d,%d) is INSIDE the circle.", x1, y1);
    }

    return 0;
}