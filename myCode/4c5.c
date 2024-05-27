// Date-17.09.22
// Author-sakshma kr
#include <stdio.h>
//#include <>

int main()
{
    float h, t, c;
    printf("Enter Hardness,Carbon content and Tensile Strength of steel to find out the grade of the steel.\nHardness- ");
    scanf("%f", &h);
    printf("Carbon Content- ");
    scanf("%f", &c);
    printf("Tensile Strength- ");
    scanf("%f", &t);

    if (h > 50 && c < 0.7 && t > 5600)
    {
        printf("Grade of your steel is 10\n");
    }

    else if (h > 50 && c < 0.7 && t < 5600)
    {
        printf("Grade of your steel is 9\n");
    }
    else if (h < 50 && c < 0.7 && t > 5600)
    {
        printf("Grade of your steel is 8\n");
    }
    else if (h > 50 && c > 0.7 && t > 5600)
    {
        printf("Grade of your steel is 7\n");
    }
    else if (h > 50 || c < 0.7 || t > 5600)
    {
        printf("Grade of your steel is 6\n");
    }
    else if (h < 50 && c > 0.7 && t < 5600)
    {
        printf("Grade of your steel is 5\n");
    }

    return 0;
}