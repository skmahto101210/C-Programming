// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>

int binary(int a)
{
    int t;

    t = a % 2;
    a = a / 2;
    if (a != 0)
    {
        printf("%d", binary(a));
    }
    return t;
}

int main()
{
    int a, *t, i = 0;
    printf("Enter natural number to find Binary Equivalent of the number.\n");
    scanf("%d", &a);
    fflush(stdin);
    if (a <= 0)
    {
        printf("_wrong input_\n\n");
        main();
    }
    else
    {
        // with recursive approch..
        printf("\n\n// with recursive approch..\n");
        if (a == 1)
        {
            printf("1");
        }
        binary(a);

        // with non-recursive approch..
        printf("\n\n// with non-recursive approch..\n");
        
        t = (int *)calloc(20, sizeof(int));

        for (; a != 0; i++)
        {
            *(t + i) = a % 2;
            a = a / 2;
        }

        int *b;
        b = (int *)calloc(i, sizeof(int));
        
        for (int j = 0; j < i+1; j++)
        {
            *(b + j) = *(t + j);
        }

        free(t);

        for (int j = 1; j < i ; j++)
        {
            printf("%d", *(b+i-j));
        }
    }

    return 0;
}