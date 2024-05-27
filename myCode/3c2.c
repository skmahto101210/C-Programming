// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a;
    printf("Enter any integer number.\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is an even number.", a);
    }
    else
    {
        printf("%d is an odd number.", a);
    }

    return 0;
}