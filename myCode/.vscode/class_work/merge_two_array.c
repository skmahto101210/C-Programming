// Date-
// Author- Saksham_Mahto

#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    printf("Enter the size of array1\n");
    scanf("%d", &n1);
    printf("Enter the size of array2\n");
    scanf("%d", &n2);
    int arr1[n1], arr2[n2];
    printf("Enter the element of array1\n");
    for (int i = 0; i < n1; i++)
    {
        printf("%d element- ", i + 1);
        scanf("%d", arr1 + i);
    }

    printf("Enter the element of array2\n");
    for (int i = 0; i < n2; i++)
    {
        printf("%d element- ", i + 1);
        scanf("%d", arr2 + i);
    }
    for (int i = 0; i < n2; i++)
    {
        n1++;
        arr1[n1 - 1] = arr2[i];
    }
    int m = arr1[0],t;
    for (int i = 0; i < n1; i++)
    {
        for (int j = i; j < n1; j++)
        {
            if (arr1[i] < arr1[j])
            {
                t=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=t;
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        printf("%d ",arr1[i]);
    }
    

    return 0;
}