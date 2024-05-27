// Date-20.09.2022
// Author-Saksham_Kr
#include <stdio.h>

int main()
{
    float w, h, bmi;
    printf("Enter the weight(in kg) and height(in meter) of the persion.\nWeight:- ");
    scanf("%f", &w);
    printf("Height:- ");
    scanf("%f", &h);
    
    bmi = w / (h * h);
    printf("The BMI of the persion is %f\n", bmi);
    
    if (bmi < 15)
    {
        printf("The BMI category of the persion is Starvation.");
        /* code */
    }
    else if (15.1 < bmi < 17.5)
    {
        printf("The BMI category of the persion is Anorexic.");
    }
    else if (17.60 < bmi < 18.5)
    {
        printf("The BMI category of the persion is Underweight.");
    }
    else if (18.6 < bmi < 24.9)
    {
        printf("The BMI category of the persion is Ideal.");
    }
    else if (25 < bmi < 25.9)
    {
        printf("The BMI category of the persion is Overweight.");
    }
    else if (30 < bmi < 30.9)
    {
        printf("The BMI category of the persion is Obese.");
    }
    else if (40 <= bmi)
    {
        printf("The BMI category of the persion is Morbidly Obese.");
    }

    return 0;
}