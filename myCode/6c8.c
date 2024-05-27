// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int x,n=0;
    printf("The Pythagorean Triplets with side length less than or equal to x(int).\n");
    scanf("%d", &x);
    fflush(stdin);
    printf("\nThe Pythagorean Triplets are-\n");
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                if (i * i + j * j == k * k)
                {
                    if (i > j)
                    {
                        printf("%d. %d, %d, %d\n",n+1, j, i, k); n++;
                        /* code */
                    }
                    else
                    {
                        printf("%d. %d, %d, %d\n",n+1, i, j, k); n++;
                    }
                }
                else if (i * i + k * k == j * j)
                {
                    if (i > k)
                    {
                        printf("%d. %d, %d, %d\n",n+1, k, i, j); n++;
                        /* code */
                    }
                    else
                    {
                        printf("%d. %d, %d, %d\n",n+1, i, k, j); n++;
                    }
                }
                else if (j * j + k * k == i * i)
                {
                    if (i > k)
                    {
                        printf("%d. %d, %d, %d\n",n+1, k, j, i); n++;
                        /* code */
                    }
                    else
                    {
                        printf("%d. %d, %d, %d\n",n+1, j, k, i); n++;
                    }
                }
               
            }
        }
    }

    return 0;
}