// Date-16.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    int r, s, a;
    printf("Enter the age of Ram, Shyam and Ajay.\nAge of Ram- ");
    scanf("%d", &r);
    printf("Age of Shyam- ");
    scanf("%d", &s);
    printf("Age of Ajay- ");
    scanf("%d", &a);
    (r > s) ? ((s > a) ? printf("Ajay is the yougest ones.") : printf("Shyam is the yougest ones.")) : ((r > a) ? printf("Ajay is the yougest ones.") : printf("Ram is the yougest ones."));

    return 0;
}