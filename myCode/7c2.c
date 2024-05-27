// Date-24.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
    int class, nf;
    printf("Classes obtainted by the student are given below.\n1. First Class\n2. Second Class\n3. Third Class\n\n");
    printf("Enter the choosen option- ");
    scanf("%d", &class);
    printf("Enter the no. of subject in which he has failed.\n");
    scanf("%d", &nf);

    switch (class)
    {
    case 1:
        if (nf > 3)
        {
            printf("He does not get any Grace marks.");
        }
        else
        {
            printf("The Grace is of 5 marks per subject.");
        }

        break;

    case 2:
        if (nf > 2)
        {
            printf("He does not get any Grace marks.");
        }
        else
        {
            printf("The Grace is of 4 marks per subject.");
        }
        break;

    case 3:
        if (nf > 1)
        {
            printf("He does not get any Grace marks.");
        }
        else
        {
            printf("The Grace is of 5 marks.");
        }
        break;
    }

    return 0;
}