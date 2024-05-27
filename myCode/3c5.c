// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int a, t;
    printf("Enter the five digit number.\n");
    scanf("%d", &a);
    printf("The Orignal number is- %d\n", a);
    printf("The Reversed number is- ");
    for (int i = 0; i < 5; i++)
    {
        t = a % 10;
        a = a / 10;
        printf("%d", t);
    }

    return 0;
}