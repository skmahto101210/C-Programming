// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>
#include "myfuns.c"

int main()
{
    float *ptr, minimum, maximum;
    int n;

    printf("How many numbers you have.\n");
    scanf("%d", &n);

    ptr = (float *)calloc(n, __SIZEOF_FLOAT__);

    printf("Enter the numbers.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", (ptr + i));
    }

    minimum = min(ptr, n);
    maximum = max(ptr, n);

    printf("The range of the set of the given numbers is %f.", (maximum - minimum));

    return 0;
}