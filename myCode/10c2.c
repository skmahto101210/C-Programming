// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

void primef(int a, int i)
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
        primef(i, 2);
    }
    else
    {
        i++;
    }

    if (a != 1)
    {
        primef(a, i);
    }
}

int main()
{
    int a;

    printf("Enter the natural number to find Prie factor.\n");
    scanf("%d", &a);
    fflush(stdin);
    if (a <= 1)
    {
        printf("_wrong input_\n\n");
        main();
    }
    else
    {
        printf("Prime Factor of %d is ", a);
        primef(a, 2);
    }
    return 0;
}