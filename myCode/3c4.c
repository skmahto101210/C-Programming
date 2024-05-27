// Date-16.09.22
// Author-saksham kr
#include <stdio.h>

int main()
{
    int a = 0, y;
    printf("Enter any year to find out what is the day on 1st january of the year.\n");
    scanf("%d", &y);
    // if (y >= 2001)
    // {
        // for (int i = 0; i < y - 01; i++)
        // {
        //     a++;
        // }
        a=y-1;
        switch ((a+a/4) % 7)
        {
        case 1:
            printf("Sunday on the date 01/01/%d", y);
            break;
        case 2:
            printf("Monday on the date 01/01/%d", y);
            break;
        case 3:
            printf("Tusday on the date 01/01/%d", y);
            break;
        case 4:
            printf("Wednesday on the date 01/01/%d", y);
            break;
        case 5:
            printf("Thursday on the date 01/01/%d", y);
            break;
        case 6:
            printf("Friday on the date 01/01/%d", y);
            break;
        case 0:
            printf("Saturday on the date 01/01/%d", y);
            break;
        }
    // }
    // else
    // {
    //     /* code */
    //     for (int i = 0; i < 2001 - y; i++)
    //     {
    //         a++;
    //     }
    //     switch ((a+a/4) % 7)
    //     {
    //     case 6:
    //         printf("Tusday on the date 01/01/%d", y);
    //     case 5:
    //         printf("Wednesday on the date 01/01/%d", y);
    //         break;
    //     case 4:
    //         printf("Thrusday on the date 01/01/%d", y);
    //         break;
    //     case 3:
    //         printf("Friday on the date 01/01/%d", y);
    //         break;
    //     case 2:
    //         printf("Satarday on the date 01/01/%d", y);
    //         break;
    //     case 1:
    //         printf("Sanday on the date 01/01/%d", y);
    //         break;
    //     case 0:
    //         printf("Monday on the date 01/01/%d", y);
    //         break;
    //     }
    // }
    return 0;
}