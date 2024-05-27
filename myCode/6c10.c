// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    printf("24 hoours of a day are-\n");
    for (int i = 0; i < 24; i++)
    {
        if (i == 0)
        {
            printf("12:00 Midnight\n");
        }
        else if (i > 0 && i < 12)
        {
            printf("%d:00 AM\n", i);
            /* code */
        }
        else if (i == 12)
        {
            printf("12:00 Noon\n");
            /* code */
        }
        else
        {
            printf("%d:00 PM\n", i % 12);
        }
    }

    return 0;
}