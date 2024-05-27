// Date-28.0922
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>

float small(float *arr)
{
    int m = *(arr);
    for (int i = 0; i < 25; i++)
    {
        if (m > *(arr + i))
        {
            m = *(arr + i);
        }
    }
    return m;
}

int main()
{
    float *arr;
    arr = (float *)calloc(25, sizeof(float));
    printf("Enter 25 numbers.\n");
    for (int i = 0; i < 25; i++)
    {
        printf("[%d]-", i + 1);
        scanf("%f", arr + i);
        fflush(stdin);
    }
    printf("The smallest number in the array is %0.3f", small(arr));

    return 0;
}