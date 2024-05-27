// Date-22.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    float p = 100000;
    printf("Data of the population at end of each year in the last decade.\n\n");
    for (int y = 0; y < 10; y++)
    {
        p = p * (1.0 - 0.1);
        printf("%d. The population at end of %d is %f\n", y + 1, 2022 - y - 1, p);
    }

    return 0;
}