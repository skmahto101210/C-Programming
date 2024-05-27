// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    float sal;
    printf("Enter the salary.\n");
    scanf("%f", &sal);
    (sal >= 25000 && sal <= 40000) ? printf("Manager\n") : ((sal >= 15000 && sal <= 25000) ? printf("Accountant\n") : printf("Clerk\n"));
    return 0;
}