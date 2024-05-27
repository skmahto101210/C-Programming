// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int i = 0;
void val()
{
    i = 100;
    printf("val's i=%d\n", i);
    i++;
}

int main()
{
    printf("mains's i=%d\n", i);
    i++;
    val();
    printf("mains's i=%d\n", i);
    val();
    return 0;
}