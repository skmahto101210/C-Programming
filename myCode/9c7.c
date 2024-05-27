// Date-27.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int gcd(int a, int b)
{
    int t;
    t = a % b;

    if (t == 0)
    {
        return b;
    }

    a = b;
    b = t;

    gcd(a, b);
}

int main()
{
    int j, k;
    
    printf("For finding the greatest integer comon divisor through Euclid's algorithm,\nexemplofied for j=1980,k=1671 as follows:\n\n1980/1617=1          1980-1 x 1617 = 363\n1617/363=4           1617-4 x 363 = 165\n363/165=2            363-1 x 165 = 33\n165/33=5             165-5 x 33 = 0\nThus,the greatest common divisor is 33.\n\n");
    
    printf("Enter integer j and k such that j>k(must).\n");
    printf("j-");
    scanf("%d", &j);
    printf("k-");
    scanf("%d", &k);

    int d = gcd(j, k);

    printf("The Greatest Common Divisor is %d", d);

    return 0;
}