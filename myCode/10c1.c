// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

int sumd(unsigned long a)
{
    int t;
    static int s = 0;
    t = a % 10;
    s += t;
    a = a / 10;
    if (a == 0)
    {
        return s;
    }

    sumd(a);
}

int main()
{
    unsigned long a, t, z;
    printf("Enter the integer number to find sum of it's all digit.\n");
    scanf("%d", &a);

    // with recursive approche..
    int s = sumd(a);

    printf("\n// with recursive approche..\n");
    printf("The sum of all %d-digit of %d is %d.\n", countd(a), a, s);

    // with non-recursive approche..
    s = 0;
    z = a;
    for (int i = 0;; i++)
    {
        t = a % 10;
        s += t;
        a = a / 10;
        if (a == 0)
        {
            break;
        }
    }
    printf("\n// with non-recursive approche..\n");
    printf("The sum of all %d-digit of %d is %d.\n", countd(z), z, s);

    return 0;
}