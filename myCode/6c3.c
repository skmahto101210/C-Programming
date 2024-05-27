// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int n, j;
    printf("Enter the number and get all posible combination of 1,2,3,...,n\n");
    scanf("%d", &n);
    printf("The posible combinations are-\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%d ", j + 1);
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ", k + 1);
        }

        printf("\n");
    }

    return 0;
}