// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>

void copyRO(int *arr1, int *arr2, int n1, int n2)
{

    if (n1 >= n2)
    {
        int t[n1];
        for (int i = 0; i < n1; i++)
        {
            t[i] = *(arr1 + i);
            *(arr1 + i) = *(arr2 + n2 - i - 1);
        }
        for (int i = 0; i < n1; i++)
        {
            *(arr2 + i) = t[n1 - i - 1];
        }
    }

    if (n1 < n2)
    {
        int t[n2];
        for (int i = 0; i < n2; i++)
        {
            t[i] = *(arr2 + i);
            *(arr2 + i) = *(arr1 + n1 - i - 1);
        }
        for (int i = 0; i < n2; i++)
        {
            *(arr1 + i) = t[n2 - i - 1];
        }
    }
}
int main()
{
    int *arr1, *arr2, n1, n2;
    printf("How many element you want enter in arr1.\n");
    scanf("%d", &n1);
    fflush(stdin);
    printf("Enter the element in arr1.\n");
    arr1 = (int *)calloc(n1, sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        printf("arr1[%d]-", i);
        scanf("%d", arr1 + i);
        fflush(stdin);
    }

    printf("\nHow many element you want enter in arr2.\n");
    scanf("%d", &n2);
    fflush(stdin);
    printf("Enter the element in arr2.\n");
    arr2 = (int *)calloc(n2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("arr2[%d]-", i);
        scanf("%d", arr2 + i);
        fflush(stdin);
    }
    copyRO(arr1, arr2, n1, n2);
    printf("\nAfter the copy the element of arr1 into arr2 and vice versa.\n");

    for (int i = 0; i < n2; i++)
    {
        printf("The element at index %d of arr1- %d\n", i, *(arr1 + i));
    }
    printf("\n");
    for (int i = 0; i < n1; i++)
    {
        printf("The element at index %d of arr2- %d\n", i, *(arr2 + i));
    }

    return 0;
}