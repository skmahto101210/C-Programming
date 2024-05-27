// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    static int count = 5;
    
    printf("count =%d\n", count--);
    
    if (count != 0)
    {
        main();
    }

    return 0;
}