// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n], sum;
    for (int i = 0; i < n; i++)
    {
        printf("%d element:- ", i + 1);
        scanf("%d", a + i);
    }
    printf("Enter the value of sum\n");
    scanf("%d", &sum);
    int i = 0, j = 0;
    for (int i = 0, k=0; i < n; i++)
    {
        int sum1 = sum;
        for (j = i; j < n; j++)
        {
            sum1 -= a[j];
            if (sum1 <= 0)
            {
                break;
            }
        }
        if (sum1 == 0){
            k++;
            printf("%d subgroup found between indexes %d to %d\n",k, i, j);
        }
    }

    return 0;
}
