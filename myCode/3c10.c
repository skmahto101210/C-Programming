// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter three points (x1,y1),(x2,y2)and(x3,y3).\n");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) == 0)
    {
        printf("All these three points fall on one straight line.");
    }
    else
    {
        printf("All these three points are NOT fall on one straight line but they formed Tringle.");
    }

    return 0;
}