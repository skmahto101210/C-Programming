// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int sumn(int a)
{
    static int s = 0;
    s += a;
    --a;
    if (a != 0)
    {
        sumn(a);
    }
    else
        return s;
}

int main()
{
    int n;
    printf("Enter the number of terms upto which you want to sum all natural number.\n");
    scanf("%d", &n);
    fflush(stdin);

    // with recursive approch.....
    int s = sumn(n);
    printf("The sum of all natural number upto %d is %d.\n", n, s);

    // with non-recursive approch....
    s = n * (n + 1) / 2;    // sum of AP series with c-diff of 1.
    printf("The sum of all natural number upto %d is %d.\n", n, s);
   
    return 0;
}