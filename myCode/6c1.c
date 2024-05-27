// Date-21.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int n, j;
    printf("Enter the number upto which you want to get prime numbers.\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (i == j)
        {
            printf("%d,", i);
        }
    }
    printf(" are the prime numbers between 1 to %d.", n);

    return 0;
}
