// Date-03.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>

void reset(char *c, int n)
{
    for (int i = 0, j = 0; i < 19; j++)
    {
        if (*(c + j) != ' ')
        {
            *(c + i) = *(c + j);
            i++;
        }
    }
    *(c + 16) = '\0';
}

int main()
{
    char ccn[20];
    printf("Enter the 16-digit Credit Card Number to check the given CCN is valid or not.\n");
    gets(ccn);

    reset(ccn, 20);
    puts(ccn);
    
    int c[8];
    for (int i = 0, j = 0; i < 8; i++, j += 2)
    {
        if ((((int)ccn[j] - 48) * 2) >= 10)
        {
            c[i] = ((((int)ccn[j] - 48) * 2) - 9);
        }
        else
            c[i] = (((int)ccn[j] - 48) * 2);
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     /* code */
    //     printf("%d", c[i]);
    // }

    int sc = 0, sum_other = 0;
    for (int i = 0; i < 8; i++)
    {
        sc = sc + c[i];
    }
    // printf("\n%d\n", sc);
    
    for (int i = 0; i < 8; i++)
    {
        sum_other = sum_other + ((int)ccn[2 * i + 1] - 48);
    }
    // printf("%d\n", sum_other);

    if ((sc + sum_other) % 10 == 0)
    {
        printf("\nThe Credit Card Number is valid!...");
    }
    else
        printf("\nThe Credit Card Number is NOT valid!...");

    return 0;
}