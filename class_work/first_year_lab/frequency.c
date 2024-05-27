// Date-
// Author- Saksham_Mahto

#include <stdio.h>

void subsequance_sum(int arr[], int n, int i, int d, int *sum)
{
    if (arr[n] < arr[n + 1] && d)
    {
        (*sum) += arr[n];
        subsequance_sum(arr, n+1, 0, 1, sum);
    }
    else if (arr[n] > arr[n + 1] && i)
    {
        (*sum) += arr[n];
        subsequance_sum(arr, n+1, 1, 0, sum);
    }
    else
    {
        *sum = 0;
        if (arr[n+1] < arr[n+2])
        {
            subsequance_sum(arr, n+1, 0, 1, sum);
        }
        else if (arr[n+1] > arr[n+2])
        {
            subsequance_sum(arr, n+1, 1, 0, sum);
        }
    }
}
int main()
{
    int n, sum = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element:- ", i + 1);
        scanf("%d", arr + i);
    }
    if (arr[0] < arr[1])
    {
        subsequance_sum(arr, 0, 0, 1, &sum);
    }
    else if (arr[0] > arr[1])
    {
        subsequance_sum(arr, 0, 1, 0, &sum);
    }
    printf("%d",sum);

    return 0;
}