// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    float a, b, c, m;
    printf("Enter the three number for find out maximum among them.\n");
    scanf("%f%f%f", &a, &b, &c);

    (a > b) ? ((b > c) ? (m = a) : ((a > c) ? (m = a) : (m = c))) : ((a > c) ? (m = b) : ((b > c) ? (m = b) : (m = c)));
    printf("THe maximum among these number is %f", m);
    return 0;
}