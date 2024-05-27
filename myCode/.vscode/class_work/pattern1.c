// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || j == 0 || j == n - i-1)
            {
                printf("%d ", j + 1 + i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
    return 0;
}