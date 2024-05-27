// Date-17.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a, b, c;
    printf("Enter the three side of a Triangle.\na- ");
    scanf("%d", &a);
    printf("b- ");
    scanf("%d", &b);
    printf("c- ");
    scanf("%d", &c);
    if (a == b == c)
    {
        printf("Triangle is EQUILATERAL.\n");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        /* code */
        printf("Triangle is ISOSCELES.\n");
    }
    if (a != b != c)
    {
        printf("Triangle is SCALENE.\n");
    }
    if ((a * a + b * b == c * c) || (c * c + b * b == a * a) || (a * a + c * c == b * b))
    {
        printf("Triangle is RIGHT ANGLE TRIANGLE.\n");
    }

    {
        /* code */
    }

    return 0;
}