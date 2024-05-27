// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
#include <math.h>

int main()
{
    int cp, sp, p;
    printf("Enter the cost price and selling price(in Rs) of the items.\nCost Price-");
    scanf("%d", &cp);
    printf("Selling Price-");
    scanf("%D", &sp);

    p = sp - cp;
    if (p > 0)
    {
        /* code */
        printf("The seller has made profit Rs%d", p);
    }
    else if (p == 0)
    {
        /* code */
        printf("The seller has made no profit, no loss.");
    }
    else
    {
        printf("The seller has incurred loss Rs%d", -p);
    }

    return 0;
}