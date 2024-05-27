// Date-11.09.2022
// Author-saksham kr
#include <stdio.h>
// #include <>

int main()
{
    int s[5], sum = 0;
    printf("Enter the marks of the student in five subject.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nMarks in subject %d:- ", i + 1);
        scanf("%d", &s[i]);
        fflush(stdin);
        if (s[i]>100){
            printf("\nWRONG_INPUT___#marks_should_not_greater_than_100#___TRY_AGAIN\n");
            i=i-1;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + s[i];
    }
    printf("The aggregate marks is %d.\nThe percentage marks in %0.2f.\n", sum, (float)sum * 0.2);

    return 0;
}