// Date-19.09.2022
// Author-Saksham_Kr

// This myfuns is a '.c' file in which some usefull functions are defined for used purpus through include(with #include"myfuns.c") in that '.c' file in which these(below) functions are required.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Decleration and definition:-
// This function is for counting digit of the given number.
int countd(int a)
{
    int i;
    for (i = 0; a != 0; i++)
    {
        a = a / 10;
    }
    return i;
}
// This function is for find out maximum value in given numbers.
float max1(float *a, int n)
{
    float m;
    m = a[0];
    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }
    return m;
}
void maxn(void)
{
    float *ptr, m;
    int n;
    printf("How many numbers you have for find maximum.\n");
    scanf("%d", &n);
    // allocate dynamic memory from heep of size of n floating number.
    ptr = (float *)calloc(n, __SIZEOF_FLOAT__);

    printf("Enter the numbers.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", ptr + i);
    }
    if (n == 1)
    {
        m = *ptr;
    }
    else
    {
        m = max1(ptr, n);
    }
    printf("The maximum among the given numbers is %f", m);
    free(ptr);
}
// This function is for find out minmum value in given numbers.
float min1(float *a, int n)
{
    float m;
    m = *a;

    for (int i = 0; i < n; i++)
    {
        if (m > *(a + i))
        {
            m = *(a + i);
        }
    }

    return m;
}
void minn(void)
{
    float *ptr, m;
    int n;
    printf("How many numbers you have for find minmum.\n");
    scanf("%d", &n);

    ptr = (float *)calloc(n, __SIZEOF_FLOAT__);

    printf("Enter the numbers.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", (ptr + i));
    }

    m = min1(ptr, n);
}
// This function is for find no. of rows in star pattern.
int row(int a)
{
    int i;

    for (i = 0; a != 0; i++)
    {
        a = a - i;
    }

    i--;

    return i;
}
// This function is for find no. is prime or not.
int prime(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
            break;
        }
        if (i == a - 1)
        {
            return 1;
        }
    }
}
// This function is for move cursor position.
void gotoxy(short int col, short int row)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {col, row};
    SetConsoleCursorPosition(h, position);
}
// This function is for find Binary no. of natural number.
int binary(int a)
{
    int t;

    t = a % 2;
    a = a / 2;
    if (a != 0)
    {
        printf("%d", binary(a));
    }
    return t;
}
//**************************For check the above functions are correct or not************************
// int main(int argc, char const *argv[])
// {
//     int f;
//     f= prime(2);
//     printf("%d",f);
//     return 0;
// }
