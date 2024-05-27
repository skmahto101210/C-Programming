// Date-
// Author- Saksham_Mahto

#include <stdio.h>

int prime_not(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num, p;
    printf("Enter the number to find they are prime or not\n");
    scanf("%d", &num);
    p = prime_not(num);
    if (p == 0)
        printf("Not prime\n");
    else
        printf("prime\n");

    return 0;
}