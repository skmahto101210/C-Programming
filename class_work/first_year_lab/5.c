// Date-
// Author- Saksham_Mahto

#include <stdio.h>

void swap(int a, int b)
{
    a = a - b;
    b = a + b;
    a = b - a;
    printf("a- %d\nb- %d", a, b);
}
int main()
{
    int a, b;
    printf("Enter value of a:- ");
    scanf("%d", &a);
    printf("Enter value of b:- ");
    scanf("%d", &b);
    swap(a, b);

    return 0;
}