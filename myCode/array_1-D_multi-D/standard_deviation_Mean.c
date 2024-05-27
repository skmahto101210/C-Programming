// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <math.h>

float mean(int n, float a[n])
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return s / n;
}

float std(int n, float a[n])
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + (a[i] - mean(n, a)) * (a[i] - mean(n, a));
    }
    return (pow(s, 0.5) / n);
}

int main()
{
    int n;
    printf("How many number you have for find there Standard Deviation & Mean.\n");
    scanf("%d", &n);
    fflush(stdin);

    float a[n];
    printf("Enter the number.\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", a + i);
        fflush(stdin);
    }

    float M,S_D;

    M=mean(n, a);
    S_D=std(n, a);

    printf("\nThe set of the number is -\n{ ");

    for (int i = 0; i < n-1; i++)
    {
        printf("%.3f, ",a[i]);
    }
    printf("%.3f }\n\n",a[n-1]);
    
    printf("Mean- %0.4f.\nStandard Deviation- %0.4f\n",M,S_D);

    return 0;
}