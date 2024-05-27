// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int a, b, i = 0, m = 1;
    printf("Enter the two +ve integer number.\nFirst num- ");
    scanf("%d", &a);
    printf("Second num- ");
    scanf("%d", &b);

    while (i < a)
    {
        m *= b;
        i++;
    }

    printf("The value of %d raised to the power of %d is %d.\n", a, b, m);
    m = 1;
    i = 0;
    
    while (i < b)
    {
        m *= a;
        i++;
    }

    printf("The value of %d raised to the power of %d is %d.\n", b, a, m);

    return 0;
}