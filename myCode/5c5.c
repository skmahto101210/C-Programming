// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{

    int i = 1, a, b, c;
    while (i <= 500)
    {
        a = i % 10;  // digit of one's place is store in a.
        b = i % 100; // digit of ten's place is store in b.
        b = (b - a) / 10;
        c = (i - b * 10 - a) / 100; // digit of hundred's place is store in c.

        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("%d,", i);
        }
        i++;
    }
    printf("is the Armstrong number.\n");

    return 0;
}