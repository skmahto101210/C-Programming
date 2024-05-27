// Date-13.09.2022
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int i = 2, j = 3, k, l;
    float a, b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;
    printf("%d %d %f %f", k, l, a, b);
    return 0;
}