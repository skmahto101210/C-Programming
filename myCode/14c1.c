// Date-29.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int threed[3][2][3];
    // printf("the first element in this arry is %d\nThe last element in this array is %d ",threed[0][0][0],threed[2][1][2]);

    printf("please enter the interger number in the three-D array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("threed[%d][%d][%d]- ", i, j, k);
                scanf("%d", (*(*(threed + i) + j) + k));
                fflush(stdin);
            }
        }
    }
    printf("\n\nthe three-D array look as-\n");
    for (int i = 0; i < 3; i++)
    {
        printf("{");
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%4d ", *(*(*(threed + i) + j) + k));
            }
            if (j == 0)
            {
                printf("} {");
            }
        }
        printf("}\n");
    }

    return 0;
}