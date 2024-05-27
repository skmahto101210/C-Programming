// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    char c;
    printf("Enter the charecter through the kyeboard.\n");
    scanf("%c", &c);
    // here I using conditional operator. 
    (97 <= c && c <= 122) ? printf("%c is the lower case alphabet.\n", c) : printf("%c is NOT the lower case alphabet.\n", c);
   
    return 0;
}