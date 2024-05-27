// Date-30.09.22
// Author-Saksham_Kr
#include <stdio.h>
#include <stdlib.h>

void insert(int i, int *n, char *a)
{
    int n1;
    printf("How many Character you want to insert.\n");
    scanf("%d", &n1);
    fflush(stdin);

    char *c;
    c = (char *)calloc(*n + n1, sizeof(char));
    printf("Enter the extra charater\n");
   
    if (i == 1)
    {
        for (int i = 0; i < n1; i++)
        {
            printf("%d char-", i + 1);
            scanf("%c", c + i);
            fflush(stdin);
        }
        for (int i = 0; i < *n; i++)
        {
            *(c + i + n1) = *(a + i);
        }
    }
    else if (i == 3)
    {
        for (int i = 0; i < n1; i++)
        {
            printf("%d char-", i + 1);
            scanf("%c", c + *n + i);
            fflush(stdin);
        }
        for (int i = 0; i < *n; i++)
        {
            *(c + i) = *(a + i);
        }
    }

    printf("\nNew set of character is-\nch[%d]- { ", *n + n1);
   
    for (int i = 0; i < *n + n1 - 1; i++)
    {
        printf("%c, ", *(c + i));
    }
    printf("%c }\n", *(c + *n + n1 - 1));
}

void retriev(int i, int *n, char *a)
{
    int n1;
    printf("How many Character you want to retriev.\n");
    scanf("%d", &n1);
    fflush(stdin);

    char *c;
    c = (char *)calloc(*n - n1, sizeof(char));

    if (i == 2)
    {
        for (int i = 0; i < *n - n1; i++)
        {
            *(c + i) = *(a + i + n1);
        }
    }
    else if (i == 4)
    {
        for (int i = 0; i < *n - n1; i++)
        {
            *(c + i) = *(a + i);
        }
    }

    printf("\nNew set of character is-\nch[%d]- { ", *n - n1);
    
    for (int i = 0; i < *n - n1 - 1; i++)
    {
        printf("%c, ", *(c + i));
    }
    printf("%c }\n", *(c + *n - n1 - 1));
}

int main()
{
    int n;
    printf("How many character you have.\n");
    scanf("%d", &n);
    fflush(stdin);
    
    char *a;
    a = (char *)calloc(n, sizeof(char));
    
    printf("Enter the character in the set of character(ch[%d]).\n", n);
   
    for (int i = 0; i < n; i++)
    {
        printf("%d char-", i + 1);
        scanf("%c", a + i);
        fflush(stdin);
    }
   
    printf("The set of the character is-\nch[%d]- { ", n);
   
    for (int i = 0; i < n - 1; i++)
    {
        printf("%c, ", *(a + i));
    }
   
    printf("%c }\n", *(a + n - 1));

    // insert/retriev.....
    printf("\nAre you want to insert or retriev character from ch[%d]\nthen press Y/y otherwise N/n\n", n);
    
    char c;
    scanf("%c", &c);
    fflush(stdin);
   
    if (c == 'Y' || c == 'y')
    {
        int i;
        printf("Which of the option you want to doing-\n   1.Insert from first end\n   2.Retriev from first end\n   3.Insert from last end\n   4.Retriev from last end\nchoose any one.\n");
        scanf("%d", &i);
        fflush(stdin);
        switch (i)
        {
        case 1:
            insert(i, &n, a);
            free(a);
            break;
        case 2:
            retriev(i, &n, a);
            free(a);
            break;
        case 3:
            insert(i, &n, a);
            free(a);
            break;
        case 4:
            retriev(i, &n, a);
            free(a);
            break;
        }
    }
    else if (c == 'N' || c == 'n')
    {
        printf("\n___OK...as you wish\nYou are not change the ORIGINAL set of the character as you entered.\n");
    }

    return 0;
}