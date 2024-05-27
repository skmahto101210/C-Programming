// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}

int main()
{
    int n, a, f;
    do
    {
        printf("Menu given below choose any one which you want.\n");
        printf("1. Factorial of a number\n2. Prime or not\n3. Odd or not\n4. Exit\n\nEnter the option no. which you choose.\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:

            printf("You choose option no. %d\n\n", n);
            printf("Enter the natural number(n) to find Factorial(n!) of the number.\nn-");
            scanf("%d", &a);
            fflush(stdin);
            f = fact(a);
            printf("The value of %d! is %d.\n\n", a, f);
            break;
        case 2:

            printf("You choose option no. %d\n\n", n);
            printf("Enter the natural number(n) to find the number(n) is Prime or not.\nn-");
            scanf("%d", &a);
            for (int i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    printf("%d is not a Prime no.\n\n", a);
                    break;
                }
                if (i == a - 1)
                {
                    printf("%d is a Prime no.\n\n", a);
                }
            }

            break;
        case 3:

            printf("You choose option no. %d\n\n", n);
            printf("Enter the natural number(n) to find the number(n) is Odd or not.\nn-");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                printf("%d is not Odd no.\n\n", a);
            }
            else
            {
                printf("%d is Odd no.\n\n", a);
            }

            break;
        case 4:

            printf("You are Exit.\n");
            break;
        }
    } while (n != 4);

    return 0;
}
