// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include "myfuns.c"

int main()
{
    int n, n1, k = 0;
    printf("Enter the number-");
    scanf("%d", &n);

    n1 = row(n);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < (2 * n1 - 1); j++)
        {

            if (i + j == n1 - 1 && i != 0)
            {
                printf("%d", k + 1);
                k++;
            }
            else if (i%2==0)
            {
                printf("%d", k + 1);
                k++;
                /* code */
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}