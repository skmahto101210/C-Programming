// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void roman(int y)
{
    int a;
    if (y / 1000 != 0)
    {
        a = y / 1000;
        for (int i = 0; i < a; i++)
        {
            printf("m");
        }
        roman(y - a * 1000);
    }
    else if (y / 100 != 0)
    {
        a = y / 100;
        if (a >= 5)
        {
            printf("d");
        }

        for (int i = 0; i < 5 - a; i++)
        {
            printf("c");
        }

        roman(y - a * 100);
    }
    else if (y / 10 != 0)
    {
        a = y / 10;
        if (a >= 5)
        {
            printf("l");
        }

        for (int i = 0; i < 5 - a; i++)
        {
            printf("x");
        }

        roman(y - a * 10);
    }
    else if (y != 0)
    {
        if (y >= 5)
        {
            printf("v");
        }

        for (int i = 0; i < 5 - y; i++)
        {
            printf("i");
        }
    }
}

int main()
{
    int y = 0;
    printf("\nCovert any given year into its Roman equivalent.\n");
    printf("Enter the Year- ");
    scanf("%d", &y);
    fflush(stdin);
    printf("Roman Equivalent of %d is ", y);
    roman(y);
    return 0;
}