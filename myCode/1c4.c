
// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
// #include <>

int main()
{
    float f, c;
    printf("Enter the temp. of a city in degree Fahrenheit.\n");
    scanf("%f", &f);
    c = (5.0 / 9) * (f - 32.0);
    printf("Tempreture of the city is %f degree Centigrade\n", c);
    return 0;
}