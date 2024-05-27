// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int n, s = 0;
   
    printf("How many element of the array you have\n");
    scanf("%d", &n);
    fflush(stdin);
   
    float arr[n];
   
    printf("Enter %d element of the array to find the array is Symmetric or non-Symmetric.\n", n);
    
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]-", i);
        scanf("%d", arr + i);
        fflush(stdin);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            s++;
        }
    }

    if (s == 0)
    {
        printf("The array is Symmetric");
    }
    else
        printf("The array is Non-Symmetric");
   
    return 0;
}