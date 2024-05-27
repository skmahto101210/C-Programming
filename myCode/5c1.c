// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int h, i = 0;
    printf("Enter the hours worked(> 40 hr) by the employee.\n");

    while (i < 10)
    {
        printf("employee%d- ", i + 1);
        scanf("%d", &h);
        if (h > 40)
        {
            /* code */
            printf("%d hr is the Overtime of employee%d.\nOvertime is paid at rate of Rs.12 per hour to the employee%d is Rs.%d.\n", h - 40, i + 1, i + 1, (h - 40) * 12);
        }
        else if (h == 40)
        {
            /* code */
            printf("No Overtime for employee%d.\n", i + 1);
        }
        else
        {
            printf("_Wrong INPUT_\n");
        }

        i++;
    }
    return 0;
}