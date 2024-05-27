// Date-15.09.2022
// Author-Saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int rs, n1, n2, n5, n10, n50, n100;
    n1 = n2 = n5 = n10 = n50 = n100 = 0;
    printf("Enter the amount in Rs.\n");
    scanf("%d", &rs);
    while (rs != 0)
    {
        /* code */
        if (rs >= 100)
        {
            /* code */
            rs = rs - 100;
            n100++;
        }
        else if (50 <= rs && rs < 100)
        {
            /* code */
            rs = rs - 50;
            n50++;
        }
        else if (10 <= rs && rs < 50)
        {
            /* code */
            rs = rs - 10;
            n10++;
        }
        else if (5 <= rs && rs < 10)
        {
            /* code */
            rs = rs - 5;
            n5++;
        }
        else if (2 <= rs && rs < 5)
        {
            rs = rs - 2;
            n2++;
        }
        else if (rs < 2)
        {
            rs = rs - 1;
            n1++;
        }
    }
    printf("Number of currency are-\nRs. 1    - %5d\nRs. 2    - %5d\nRs. 5    - %5d\nRs. 10   - %5d\nRs. 50   - %5d\nRs. 100  - %5d\n", n1, n2, n5, n10, n50, n100);
    return 0;
}