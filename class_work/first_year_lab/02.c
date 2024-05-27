// Date- 12.12.22
// Author- Saksham_Mahto

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array- ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d element- ", i + 1);
        scanf("%d", arr + i);
    }

    int m1, m2;
    m1 = m2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > m1)
        {
            m2=m1;
            m1 = arr[i];
        }
        else if (arr[i]<m1 && arr[i]>m2)
        {
            m2=arr[i];
        }
        
    }

    printf("The second max is %d\n", m2);
    return 0;
}