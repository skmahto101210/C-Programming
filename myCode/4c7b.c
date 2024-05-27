// Date-20.09.2022
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    char c;
    printf("Enter the character through keyboard.\n");
    scanf("%c", &c);
    
    ((c <= 47 && c >= 0) || (c <= 64 && c >= 58) || (c <= 96 && c >= 91) || (c <= 127 && c >= 123)) ? printf("%c is the Special Symnol.", c) : printf("%c is NOT the Special Symnol.", c);
   
    return 0;
}