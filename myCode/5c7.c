// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int a, p = 0, n = 0, z = 0;
    char c;
    while (a)
    {
        printf("Enter the number.\n");
        scanf("%d", &a);
        fflush(stdin);
        if (a > 0)
        {
            p++;
        }
        else if (a = 0)
        {
            z++;
        }
        else
        {
            n++;
        }

        printf("Are you want to enter one more number then press Y/y otherwise N/n.\n");
        scanf("%c", &c);
        fflush(stdin);
        if (c == 'N' || c == 'n')
        {
            break;
        }
        else if (c == 'Y' || c == 'y')
        {
            continue;
        }
        else
        {
            printf("_WRONG_INPUT_");
            goto end;
        }
    }
    printf("Number of\nPositive- %d\nNegetive number- %d\nZeros- %d", p, n, z);
    end:
    return 0;
}