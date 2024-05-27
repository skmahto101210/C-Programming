// Date-
// Author- Saksham_Mahto

#include <stdio.h>

void add(void)
{
    float sum = 0, num;
    printf("Addition(+):-\n");
    for (int i = 0;; i++)
    {
        scanf("%f", &num);
        fflush(stdin);
        sum += num;
        printf("Total- %f\n", sum);
    }
}

void substract(void)
{
    float sub = 0, num;
    printf("Substraction(-):-\n");
    for (int i = 0;; i++)
    {
        scanf("%f", &num);
        fflush(stdin);
        sub -= num;
        printf("Total- %f\n", sub);
    }
}

void multiply(void)
{
    float mult = 1, num;
    printf("Multiplication(*):-\n");
    for (int i = 0;; i++)
    {
        scanf("%f", &num);
        fflush(stdin);
        mult *= num;
        printf("Total- %f\n", mult);
    }
}

void divide(void)
{
    float div, num;
    printf("Division(/):-\n");
    for (int i = 0;; i++)
    {
        scanf("%f", &num);
        fflush(stdin);
        if (i == 0)
            div = num;
        else
            div /= num;
        printf("Total- %f\n", div);
    }
}

int main()
{
    char c;
    printf("Choose Operators\n");
    printf("   +\n");
    printf("   -\n");
    printf("   *\n");
    printf("   /\n");
    scanf("%c", &c);
    fflush(stdin);
    switch (c)
    {
    case '+':
        add();
        break;
    case '-':
        substract();
        break;
    case '*':
        multiply();
        break;
    case '/':
        divide();
        break;
    }
    return 0;
}