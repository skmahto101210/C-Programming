// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>

int main()
{
    float arr[25], n;
    int p = 0;
    
    printf("Enter numbers in the set of 25 numbers.\n");

    for (int i = 0; i < 25; i++)
    {
        printf("[%d]-", i + 1);
        scanf("%f", arr + i);
        fflush(stdin);
    }
   
    printf("Enter a number to be searched in the set of the 25 numbers is present or not.\n");
    scanf("%f", &n);
    fflush(stdin);

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == n)
        {
            p++;
        }
    }

    if (p != 0)
    {
        printf("%0.3f is present in the set about %d times.", n, p);
    }

    return 0;
}