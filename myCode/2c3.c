// Date-13.09.2022
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    float a = 5, b = 2;
    int c, d;
    c = a % b; // '%' this operator is not operands on float, so that's why error will occur.
    d = a / 2;
    printf("%d %d", d, c);

    return 0;
}