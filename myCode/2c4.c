// Date-13.09.2022
// Author-saksham kr
#include <stdio.h>
// #include "myfuns.c"
int countd(int a)
{
    int i;
    for (i = 0; a != 0; i++)
    {
        a = a / 10;
    }
    return i;
}
int main()
{
    int a, t, n, s = 0;
    printf("Enter the number and get sum of all digits of the number.\n");
    scanf("%d", &a);
    n = countd(a);

    for (int j = 0; j < n; j++)
    {
        s = s + a % 10;
        a = a / 10;
    }
    printf("The sum of all digits of the num is %d.", s);

    return 0;
}
