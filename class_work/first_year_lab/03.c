//Date-  
//Author- Saksham_Mahto 

#include<stdio.h>

int main()
{
    int n,isp;
    printf("ENTER THE NUMBER- ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                isp=0;
                break;
            }
            else isp=1;
        }
        if (isp)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}