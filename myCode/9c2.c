// Date-26.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

void fun(float a, float b, float c, float *ave, float *per)
{
    *ave = (a + b + c) / 3;
    *per = *ave;
}

int main()
{
    float s1, s2, s3, ave, per;

    printf("Enter the marks obtained(out of 100 in each subject) by the student in three subject.\nS1- ");
    scanf("%f", &s1);
    printf("S2- ");
    scanf("%f", &s2);
    printf("S3- ");
    scanf("%f", &s3);

    fun(s1, s2, s3, &ave, &per);

    printf("\nAverage of the marks in 3 subject is %f\nPercentage obatined by the student is- %f %c", ave, per, '%');

    return 0;
}