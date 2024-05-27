#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1022 * sizeof(char));
    scanf("%[^\n]", s);
    int k = 0;
    for (int j = 48; j < 58; j++)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == j)
            {
                k++;
            }
        }
        printf("%d ", k);
        k = 0;
    }

    return 0;
}
