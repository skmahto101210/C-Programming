//Date- 12.12.22 
//Author- Saksham_Mahto 


#include<stdio.h>

int main()
{
    /* code */
    int n;
    printf("Enter the size of the array- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element- ",i+1);
        scanf("%d",arr+i);
    }
    
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]<=arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                for (int k = 0; k < n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("The second max is %d",arr[1]);
    return 0;
}