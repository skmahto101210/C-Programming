// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int a, t;
    printf("Enter an integer number.\n");
    scanf("%d", &a);
    printf("The octal equivalent is ");
    while (a != 0)
    {
        t = a % 8;
        a = a / 8;
        printf("%d", t);
    }

    return 0;
}