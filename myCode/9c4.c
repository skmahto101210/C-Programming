// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void circularshift(int arr[], int a)
{
    int t = arr[0];
    for (int i = 0; i < a; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[a - 1] = t;
}

int main()
{
    int a, s;

    printf("______Circular Shift_______\n\n");
    printf("How many number you have for circular shifting.\n");
    scanf("%d", &a);

    int n[a];

    printf("Enter the %d integer numbers.\n", a);

    for (int i = 0; i < a; i++)
    {
        printf("n%d-", i + 1);
        scanf("%d", n + i);
    }

    printf("How many times you want Circular shifting.\n");
    scanf("%d", &s);

    for (int i = 0; i < s; i++)
    {
        circularshift(n, a);
        switch (i + 1)
        {
        case 1:
            printf("\nAfter the 1st Circular shift \n");
            for (int i = 0; i < a; i++)
            {
                printf("n%d= %d\n", i + 1, n[i]);
            }

            break;
        case 2:
            printf("\nAfter the 2nd Circular shift \n");
            for (int i = 0; i < a; i++)
            {
                printf("n%d= %d\n", i + 1, n[i]);
            }

            break;
        case 3:
            printf("\nAfter the 3rd Circular shift \n");
            for (int i = 0; i < a; i++)
            {
                printf("n%d= %d\n", i + 1, n[i]);
            }

            break;

        default:

            printf("\nAfter the %dth Circular shift \n", i + 1);
            for (int i = 0; i < a; i++)
            {
                printf("n%d= %d\n", i + 1, n[i]);
            }

            break;
        }
    }

    return 0;
}