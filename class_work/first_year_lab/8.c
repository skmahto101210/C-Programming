// Date-
// Author- Saksham_Mahto

#include <stdio.h>
int maxNum(int a[], int n)
{
    int max;
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element- ",i+1);
        scanf("%d", arr + i);
    }
    int max;
    max = maxNum(arr, n);
    printf("The maximum number is %d", max);

    return 0;
}