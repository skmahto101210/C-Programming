// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>

void inter(int *arr, int j)
{
    int t;
    for (int i = 0; i < j / 2; i++)
    {
        t = *(arr + 2 * i);
        *(arr + 2 * i) = *(arr + 2 * i + 1);
        *(arr + 2 * i + 1) = t;
    }
}

int main()
{
    int *arr, i;
    printf("How many element you want to enter in the array.\n");
    scanf("%d", &i);
    fflush(stdin);
    printf("Enter the element of the array.\n");

    arr = (int *)calloc(i, sizeof(int));
    for (int j = 0; j < i; j++)
    {
        printf("arr[%d]-", j);
        scanf("%d", arr + j);
        fflush(stdin);
    }

    printf("\n");
    for (int j = 0; j < i; j++)
    {
        printf("The element at index %d is %d\n", j, *(arr + j));
    }

    inter(arr, i);
    printf("\nAfter the interchange the odd and even element of an array.\n");
    for (int j = 0; j < i; j++)
    {
        printf("The element at index %d is %d\n", j, *(arr + j));
    }

    return 0;
}