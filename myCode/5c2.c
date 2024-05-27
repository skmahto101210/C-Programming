// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int n, m = 1, a;
    printf("Enter the +ve integer number for find out factorial value of them.\n");
    scanf("%d", &n);
    a = n;
    if (n > 0)
    {
        while (n != 0)
        {
            m = m * n;
            n--;
        }
        printf("The factorial of %d is %d.", a, m);
    }
    else if (n == 0)
    {
        m = 1;
        printf("The factorial of %d is %d.", a, m);
    }
    else
    {
        printf("_WRONG_INPUT_");
    }

    return 0;
}