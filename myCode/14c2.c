// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

int main()
{
    int arr[5][5];
    printf("Enter the element in 2-D array of 5 rows and 5 column.\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("arr[%d][%d]-", i, j);
            scanf("%d", (*(arr + i) + j));
            fflush(stdin);
        }
    }

    int m;
    m = arr[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m < arr[i][j])
            {
                m=arr[i][j];
            }
        }
    }

    printf("\nThe maximum number in the array is %d", m);
    return 0;
}