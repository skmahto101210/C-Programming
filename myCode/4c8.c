// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <time.h>

int main()
{
    int y;
    printf("Enter the Year for find out the year is leap year or not.\n");
    scanf("%d", &y);

    if (y < 2022)
    {
        /* code */
        ((y % 4) == 0) ? printf("%d was the leap year.", y) : printf("%d was NOT the leap year.", y);
    }
    else
    {
        ((y % 4) == 0) ? printf("%d is the leap year.", y) : printf("%d is NOT the leap year.", y);
    }

    return 0;
}