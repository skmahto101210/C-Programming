// Date-17.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a, b, c;
    printf("Enter the three side of a triangle.\na-");
    scanf("%d", &a);
    printf("b-");
    scanf("%d", &b);
    printf("c-");
    scanf("%d", &c);
    
    if ((a + b > c) && (b + c > a) && (a + c > b))
    {
        /* code */
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is NOT valid.");
    }

    return 0;
}