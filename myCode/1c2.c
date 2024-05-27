// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
// #include <>

int main()
{
    printf("Enter the distance between two cities(in kilometers)_\n");
    float km, m, ft, in, cm;
    scanf("%f", &km);
    m = km * 1000;
    ft = m * 3.2808399;
    in = m * 39.3700787;
    cm = m * 100;
    printf("The distance between given two cities %.3f meter.\n", m);
    printf("The distance between given two cities %.3f feet.\n", ft);
    printf("The distance between given two cities %.3f inches.\n", in);
    printf("The distance between given two cities %.3f centimeter.\n", cm);
    return 0;
}