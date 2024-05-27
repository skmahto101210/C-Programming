// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    long int n, i, n1;
    printf("enter the number\n");
    scanf("%ld", &n);
    n1 = n;
    for (i = 0;; i++)
    {
        n1 /= 10;
        if (n1 == 0)
            break;
    }
    i++;
    int arr[i];
    for (int j = 0; j < i; j++)
    {
        arr[i - j - 1] = n % 10;
        n /= 10;
    }
    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (arr[k] == arr[j])
            {
                for (int l = k; l < i; l++)
                {
                    arr[l] = arr[l + 1];
                }
                k--;
                i--;
            }
        }
    }
    int sum=0;
    for (int j = 0; j < i; j++)
    {
        sum+=arr[j];
    }
    printf("%d",sum);
    return 0;
}