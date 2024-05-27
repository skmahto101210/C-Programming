// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

void primefac(int a, int i)
{
    if (a % i == 0 && prime(i) == 1)
    {
        if (prime(a) == 1)
        {
            printf("%d", i);
        }
        else
            printf("%d, ", i);

        a = a / i;
    }
    else if (a % i == 0 && prime(i) == 0)
    {
        a = a / i;
        primefac(i, 2);
    }
    else
    {
        i++;
    }

    if (a != 1)
    {
        primefac(a, i);
    }
}

int main()
{
    int n;
    printf("Enter the natural number(!= 1) to find PRIME FACTOR.\n");
    scanf("%d", &n);
    fflush(stdin);

    if (n <= 1)
    {
        printf("_wrong input_\n\n");
        main();
    }
    else
    {
        printf("Prime Factor of %d is ", n);
        primefac(n, 2);
    }
    return 0;
}