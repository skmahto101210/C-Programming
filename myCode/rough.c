//Date-  
//Author- Saksham_Mahto 

#include<stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0,k=0; j < 5+i; j++)
        {
            if (j<5-i-1)
            {
                printf("  ");
            }
            else if (j<5)
            {
                k++;
                printf("%d ",i+k);
            }
            else
                printf("%d ",k--);          
        }
        printf("\n");
    }
    
    return 0;
}