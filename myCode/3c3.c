// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <-library->

int main()
{
    int y;
    printf("Enter any year.\n");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("%d is a leap year.", y);
    }
    else
    {
        printf("%d is NOT a leap year.", y);
    }

    return 0;
}