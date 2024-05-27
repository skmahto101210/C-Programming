// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
// #include <>

int main()
{
    float s, ts;
    printf("Enter your basic salary\n");
    scanf("%f", &s);
    ts = s + (0.4 * s) + (0.2 * s);
    printf("Your basic salary is %.2f\nYour dearness allowance is %.2f\n",s, (0.4 * s));
    printf("Your house rent allowance is %.2f\nYour gross salary is %.2f\n", (0.2 * s), ts);
    return 0;
}