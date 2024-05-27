// Date-01.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>

int main()
{
    int n, p, c;
   
    printf("How many character(including space) in your string.\n");
    scanf("%d", &n);
    fflush(stdin);
    char str[n + 1];
    puts("Enter the string-");
    gets(str);
   
    printf("\nFrom which position(start with 1) and How many charater you want to EXTRACT part of string.\n");
    printf("position-");
    scanf("%d", &p);
    fflush(stdin);
    printf("No. of char-");
    scanf("%d", &c);
    fflush(stdin);

    char ep[c + 1];
    for (int i = 0; i<c; i++, p++)
    {
        ep[i] = str[p - 1];
    }
    ep[c] = '\0';
    
    printf("\nThe Extract part of the string is- '%s'\n",ep);

    return 0;
}