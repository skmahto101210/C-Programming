//Date-22.09.22
//Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int n,m;
    printf("Enter the number and get multiplication table of the number.\n");
    scanf("%d",&n);
    printf("Upto how many multiplication you want of the given number.\n");
    scanf("%d",&m);
    printf("Multiplication Tabel Of %d are-\n",n);

    for (int i = 0; i <m ; i++)
    {
        printf("%d x %d = %d\n",n,i+1,n*(i+1));
    }
          
    return 0;
}