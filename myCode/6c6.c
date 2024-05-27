// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

int main()
{
    float q, r, p, a;
    int n;
    printf("The interest compound 'q' times per year at an annual rate of\nr(in percent) for 'n' years, the principal 'p' compounds to\nan amount 'a' as per the following formula.\n");
    printf("a = p(1+r/q)^(nq)\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of -\nq-");
        scanf("%f", &q);
        printf("r-");
        scanf("%f", &r);
        printf("n-");
        scanf("%d", &n);
        printf("p-");
        scanf("%f", &p);

        a = p * pow((1 + r / q), (n * q));
        printf("Following are the table of value of q,r,n,p and a\n q     r    n    p     a\n");
        printf("%0.2f  %0.2f  %d  %0.2f  %f\n", q, r, n, p, a);
    }

    return 0;
}