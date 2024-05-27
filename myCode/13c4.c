// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    float arr[25];
    int p = 0, n = 0, z = 0;
   
    printf("Enter numbers in the set of 25 numbers.\n");
   
    for (int i = 0; i < 25; i++)
    {
        printf("[%d]-", i + 1);
        scanf("%f", arr + i);
        fflush(stdin);
        if (arr[i] < 0)
        {
            /* code */ n++;
        }
        else if (arr[i] > 0)
        {
            p++;
            /* code */
        }
        else
            z++;
    }
    printf("\nIn the set of 25 numbers\nNo. of Positive number is %d.\nNO. of Negative number is %d.\nNo. of Zero is %d.",p,n,z);

    return 0;
}