// Date-02.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fib_word(char *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("\"%c\", ", *(c + i));
        }
        else
        {
            *(c + i) = *(c + i - 1);
            *(c + i + 1) = *(c + i - 2);
            printf("\"%s\", ", c+i);
        }
    }
}

int main()
{
    int n;
    printf("How many terms you want to print FIBONACCI words.\n");
    scanf("%d", &n);
    fflush(stdin);
    char c[] = {'a', 'b'};

    fib_word(c, n);

    return 0;
}