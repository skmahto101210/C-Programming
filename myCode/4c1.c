// Date-17.09.22
// Author-saksham kr
#include <stdio.h>
//#include <>

int main()
{
    char c;
    
    printf("Enter a character through keyboard.\n");

    scanf("%c", &c);
   

    if (65 <= c && c <= 90)
    {
        printf("%c is a Capital letter.", c);
    }
    else if (97 <= c && c <= 122)
    {
        printf("%c is a Small case letter.", c);
    }
    else if (48 <= c && c <= 57)
    {

        printf("%c is a digit.", c);
    }
    else
    {
        printf("%c is a Special symbols.", c);
    }

    return 0;
}