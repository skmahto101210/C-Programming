// Date-01.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(int n, char c[n + 1])
{
    if (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            printf("%c", c[i]);
        }
    }
    else
        printf("null )");
    printf("%c )\n", c[n - 1]);
}

int main()
{
    int n;
    puts("How many characters in your string.");
    scanf("%d", &n);
    fflush(stdin);
    if (n > 0)
    {
        char s[n + 1];
        puts("Enter the Characters-");
        gets(s);
        printf("\nYour string is-\n%s\n", s);

        unsigned int sb = 0, a = 0, n1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 48 && s[i] <= 57) // int
            {
                n1++;
            }
            else if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) // char
            {
                a++;
            }
            else if (s[i] >= 0 && s[i] < 48 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 254)
            {
                sb++;
            }
        }
        
        char g1[n1 + 1], g2[a + 1], g3[sb + 1];
        for (int i = 0, j = 0, k = 0, l = 0; i < n + 1; i++)
        {
            if (s[i] >= 48 && s[i] <= 57) // integers
            {
                g1[j] = s[i];
                j++;
            }
            else if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122) // Alphabets
            {
                g2[k] = s[i];
                k++;
            }
            else if (s[i] >= 0 && s[i] < 48 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 254) // symbols
            {
                g3[l] = s[i];
                l++;
            }
        }
        
        g1[n1] = '\0';
        g2[a] = '\0';
        g3[sb] = '\0';
        printf("\nIn your string -\nNo. of integer- %d\nNo. of Alphabets- %d\nNo. of symbols- %d\n\n", n1, a, sb);

        printf("Integers- ( ");
        print(n1, g1);

        printf("Alphabets- ( ");
        print(a, g2);

        printf("Symbols- ( ");
        print(sb, g3);
    }
    else
    {
        printf("\nYour string is-\n( null )\n");
    }

    return 0;
}