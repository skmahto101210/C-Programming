// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void modify(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i]=3*arr[i];
    }
}

int main()
{
    int arr[10];
    printf("ENTER 10 integer number of the array.\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d]-", i);
        scanf("%d", arr + i);
        fflush(stdin);
    }
    
    modify(arr);
    
    printf("After the multiply each element by 3, the new elements of array are-\n");
    printf("arr[10] = { ");
    
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ",arr[i]);
    }
    
    printf("%d }",arr[9]);

    return 0;
}