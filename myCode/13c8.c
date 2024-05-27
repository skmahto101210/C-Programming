// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void sort(int arr[])
{
    
    for (int i = 0; i < 25; i++)
    {
        for (int j = i+1; j < 25; j++)
        {
            if (arr[i] > arr[j])
            {
                int t;
                t=arr[i];
                arr[i]= arr[j];
                arr[j]=t;
            }
        }
    }
}

int main()
{
    int arr[25];
    printf("Enter 25 integer number\n");
    for (int i = 0; i < 25; i++)
    {
        printf("arr[%d]-", i);
        scanf("%d", arr + i);
        fflush(stdin);
    }

    sort(arr);

    printf("\nAfter the sort array,the new array as-\narr[25] = { ");
    for (int i = 0; i < 24; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d }", arr[24]);

    return 0;
}