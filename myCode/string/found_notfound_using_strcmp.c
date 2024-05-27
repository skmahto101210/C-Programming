// Date-03.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    puts("How many persion are you want to add in masterlist in which who are allowed or not.");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter name of %d persions in masterlist.\n", n);
    
    char masterlist[n][30];
    for (int i = 0; i < n; i++)
    {
        printf("%d.", i + 1);
        gets(masterlist[i]);
        
        m = strlen(masterlist[0]);
        
        if (m < strlen(masterlist[i]))
        {
            m = strlen(masterlist[i]);
        }
    }

    char name[m + 1];
    int a = 0;
    printf("Enter your name.\n");
    gets(name);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(masterlist[i], name) == 0)
        {
            a = 1;
        }
    }
   
    if (a == 1)
    {
        printf("Welcome, you can enter the place.\n");
    }
    else
        printf("Sorry, you are the trespasser.\n");

    return 0;
}