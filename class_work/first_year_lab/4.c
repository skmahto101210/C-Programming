// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int sumN(int n)
{
    // int sum = n;
    // if (n == 0)
    //     return 0;
    // else
    //     return sum + sumN(--n);
    // OR
    return n * (n + 1) / 2;
}
int main()
{
    int sum, n;
    printf("enter the number upto which you find sum\n");
    scanf("%d", &n);
    sum = sumN(n);
    printf("The sum of first %d number is %s", n, 😍);
    return 0;
}