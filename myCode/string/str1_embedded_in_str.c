// Date-03.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>

int main()
{
    char str[][30] = {"We will teach you how to...", "Move a mountain", "Level a building", "Erase the past", "Make a million", "...all through C!"};
    char str1[28];
    puts("Enter the string to find in which of string in str[] is embedded.");
    gets(str1);

    char c[10];
    int a = 0, k = 0;

    for (int i = 0, j; i < 6; i++)
    {
        for (j = 0;; j++)
        {
            if (str[i][j] != ' ' || str[i][j] != '\0')
            {
                c[j] = str[i][j];
            }
            else
            {
                break;
            }
        }
        c[j + 1] = '\0';
        if (strcmp(str1, c) == 0)
        {
            k++;
        }
    }

    printf("\"%s\" is embedded in %d string\n", c, k);

    return 0;
}