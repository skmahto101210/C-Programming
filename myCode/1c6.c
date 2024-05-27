// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a = 1189, b = 841, t;

    for (int i = 0; i < 9; i++)
    {
        printf("%d.Size of paper A%d_ %dx%d mm\n", i + 1, i, a, b);
        t = a / 2;
        a = b;
        b = t;
    }

    return 0;
}