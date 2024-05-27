// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a;
    printf("Enter the number to fine absolute of the number.\n");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("The absolute value of the %d is %d.", a, a);
    }
    else
    {
        printf("The absolute value of the %d is %d.", a, -a);
    }

    return 0;
}