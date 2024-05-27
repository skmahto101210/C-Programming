// Date-02.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>

int found = 0;

void reset(char c[14])
{
    int i = 0, j;
    for (j = 0; *(c + i) != 0; j++)
    {

        if ((*(c + j) >= 48 && *(c + j) <= 57))
        {
            *(c + i) = *(c + j);
            i++;
        }
        else if (*(c + j) == 'x' || *(c + j) == 'X')
        {
            *(c + i) = '1';
            *(c + i + 1) = '0';
            i += 2;
        }
    }

    if (found == 1)
    {
        *(c + i - 2) = '\0';
    }
    else
        *(c + i - 1) = '\0';
}

int main()
{
    char digit[14];
    printf("Enter the 10-digit number(123-4567-89-X) to check the number is ISBN or not.\n(for digit '10' use 'X')\n");
    gets(digit);

    int s = 0;
    for (int j = 0; j < 14; j++)
    {
        if (digit[j] == 'x' || digit[j] == 'X')
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        reset(digit);
        printf("%s", digit);
        for (int i = 0, k = 0; i < 11; i++)
        {
            if (digit[i] == '1' && digit[i + 1] == '0')
            {
                s = s + (10 - k) * (((int)digit[i] - 48) * 10);
                k++;
            }
            else
            {
                s = s + (10 - k) * ((int)digit[i] - 48);
                k++;
            }
        }
    }
    else
    {
        reset(digit);
        printf("%s", digit);

        for (int i = 0; i < 11; i++)
        {
            s = s + (10 - i) * ((int)digit[i] - 48);
        }
    }

    if (s % 11 == 0)
    {
        printf("\nIt is an ISBN number.\n");
    }
    else
        printf("\nIt is not an ISBN number.\n");

    return 0;
}