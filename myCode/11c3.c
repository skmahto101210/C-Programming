// Date-28.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void funs(void);

int main()
{
    funs();
    funs();
    return 0;
}
void funs()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    i++;
    j++;
    k++;
    printf("%d %d %d\n", i, j, k);
}