// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    /* code */
    int s, e;
    printf("Enter the Starting year and ending year of the range:\nStarting year- ");
    scanf("%d", &s);
    printf("Ending Year- ");
    scanf("%d", &e);
    printf("The all leap year in the range osf the year (%d , %d) is- \n",s,e);
    for (int i = s; i <= e; i++)
    {
        if (i % 4 == 0 && i % 100 != 0)
        {
            printf("%d,", i);
        }
        else if (i % 400 == 0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}