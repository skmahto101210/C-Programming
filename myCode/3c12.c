// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a, b;
    printf("Enter a point(x,y).\n");
    scanf("%d%d", &a, &b);
    if (a == 0)
    {
        printf("The point(%d,%d) is on Y-axis.", a, b);
    }
    else if (b == 0)
    {
        printf("The point(%d,%d) is lies on X-axis.", a, b);
    }
    else if (a == 0 &&b == 0)
    {
        printf("The point(%d,%d) is lies on the  origin.", a, b);
    }
    else
    {
        printf("The point(%d,%d) is NOT lies on X-axis,Y-axis and the origin.", a, b);
    }

    return 0;
}