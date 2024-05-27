// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

int main()
{
    int a, f;
    printf("Enter the Natural number to find Factorial(n!) of the number.\n");
    scanf("%d", &a);
    f = fact(a);
    printf("The value of %d! is %d", a, f);
    return 0;
}