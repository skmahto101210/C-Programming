// Date-13.09.2022
// Author-saksham kr
#include <stdio.h>
#include "myfuns.c"

int main()
{
    int a, t, n;
    printf("Enter the number\n");
    scanf("%d", &a);
    n = countd(a);
    printf("Your number is %d\n", a);
    printf("Reverse of the number is- ");
    for (int i = 0; i < n; i++)
    {
        t = a % 10;
        a = a / 10;
        printf("%d", t);
    }

    return 0;
}