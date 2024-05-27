// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void fib_series(int n)
{
    static int a = 1, b = 1;
    b = a + b;
    a = b - a;
    printf("%d, ", a);
   
    if (n != 0)
    {
        fib_series(--n);
    }
}

int main()
{
    static int m;
    printf("Enter the number of terms(+ve int) upto which you want to find Fibonacci Series.\n");
    scanf("%d", &m);
    fflush(stdin);

    if (m <= 0)
    {
        printf("_wrong input_\n\n");
        main();
    }
    else
    {
        printf("The Fibonacci Series upto %d terms are-\n\n", m);
        fib_series(m);
    }
    return 0;
}