// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int l, b;
    printf("Enter the length and breadth of the Rectangle.\nlength- ");
    scanf("%d", &l);
    printf("breadth- ");
    scanf("%d", &b);
    if ((l * b) >= (l + b))
    {
        printf("The area of the Rectangle is greater than its perimeter.\n");
    }
    else
    {
        printf("The area of the Rectangle is NOT greater than its perimeter.\n");
    }

    return 0;
}