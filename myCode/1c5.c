// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
// #include <>

int main()
{
    float l, b, r;
    printf("Enter the dimensions of rectangle.\nLength(unit)-");
    scanf("%f", &l);
    printf("Breadth(unit)-");
    scanf("%f", &b);
    printf("Area of the rectangle is %f unit square.\nPerimeter is %f unit.\nEnter the radius of the given circle.\n", (l * b), (l + b));
    scanf("%f", &r);
    printf("Area of the circle is %f unit square.\nCircumference is %f unit.\n ", (3.14 * r * r), 2 * 3.14 * r);

    return 0;
}