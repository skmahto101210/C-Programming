// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

void primef(int a)
{
    for (int i = 2; a != 1;)
    {
        if (a % i == 0)
        {
            if (prime(i) == 1)
            {
                if (prime(a)==1)
                {
                    printf("and %d.",a);
                    break;
                }
                
                printf("%d, ", i);
                a = a / i;
            }
            else
            {
                primef(i);
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int a;
    printf("Enter the Natural number to find there prime factor.\n");
    scanf("%d", &a);
    printf("The Prime factor of %d is ", a);
    primef(a);
   
    return 0;
}