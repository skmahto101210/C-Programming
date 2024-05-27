// Date-01.10.22
// Author-Saksham_Kr
#include <stdio.h>
#include <string.h>
int xstrlen(char *a)
{
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
    {
    }
    return i;
}

void xstrcpy(char *a, char *b)
{
    int i;
    for (i = 0; *(b + i) != '\0'; i++)
    {
        *(a + i) = *(b + i);
    }
    *(a + i) = '\0';
}

void xstrcat(char *a, char *b)
{
    int i, j = xstrlen(a);

    for (i = 0; *(b + i) != '\0'; i++)
    {
        *(a + i + j) = *(b + i);
    }
    *(a + i + j) = '\0';
}

int xstrcmp(char *a, char *b)
{
    int i;
    for (i = 0;; i++)
    {
        if (*(a + i) != *(b + i))
        {
            return (*(a + i) - *(b + i));
        }
        else if (*(a + i) == '\0' || *(b + i) == '\0')
        {
            break;
        }
    }
    return 0;
}

int main()
{
// __________________using string functions______________
   
    printf("Length of the Strings...\n");
    char arr[] = "Saksham kr";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Shankar Prasad Mahto");
    printf("string1 = %s, length = %d\nstring2 = %s, length = %d\n\n", arr, len1, "Shankar Prasad Mahto", len2);

    printf("copy one string into another string...\n");
    char target[len1];
    strcpy(target, arr);
    printf("string1 = %s, length = %d\n", target, strlen(target));
    char target1[len2];
    strcpy(target1, "Shankar Prasad Mahto");
    printf("string1 = %s, length = %d\n", target1, strlen(target));

    printf("\nattach one string at the end of another string...\n");
    char target2[] = "hello!";
    strcat(target2, arr);
    printf("\nstring = %s, length = %d\n", target2, strlen(target2));
    strcat(target2, "hello");
    printf("string = %s, length = %d\n", target2, strlen(target2));
    
    printf("compare one string from another string...\n");
    int i, j, k, l, m;
    i = strcmp(arr, target);
    j = strcmp(arr, target1);
    k = strcmp(arr, target2);
    l = strcmp("Shankar Prasad Mahto", "Shankar Prasad Mahto");
    m = strcmp(target1, target2);
    printf("%d\n%d\n%d\n%d\n%d", i, j, k, l, m);

// _____________using own made functions____________________
    printf("Length of the Strings...\n");
    char xarr[] = "Saksham kr";
    int xlen1, xlen2;
    xlen1 = xstrlen(xarr);
    xlen2 = xstrlen("Shankar Prasad Mahto");
    printf("string1 = %s, length = %d\nstring2 = %s, length = %d\n\n", xarr, xlen1, "Shankar Prasad Mahto", xlen2);

    printf("copy one string into another string...\n");
    char xtarget[30];
    xstrcpy(xtarget, xarr);
    printf("string1 = %s, length = %d\n", xtarget, xstrlen(xtarget));
    char xtarget1[30];
    xstrcpy(xtarget1, "Shankar Prasad Mahto");
    printf("string1 = %s, length = %d\n", xtarget1, xstrlen(xtarget1));

    printf("\nattach one string at the end of another string...\n");
    char xtarget2[] = "hello!";
    xstrcat(xtarget2, xarr);
    printf("string = %s, length = %d\n", xtarget2, strlen(xtarget2));
    xstrcat(xtarget2, "hello");
    printf("string = %s, length = %d\n", xtarget2, strlen(xtarget2));

    printf("compare one string from another string...\n");
    int i, j, k, l, m;
    i = xstrcmp(xarr, xtarget);
    j = xstrcmp(xarr, xtarget1);
    k = xstrcmp(xarr, xtarget2);
    l = xstrcmp("Shankar Prasad Mahto", "Shankar Prasad Mahto");
    m = xstrcmp("jerry", "jerry boy");
    printf("%d\n%d\n%d\n%d\n%d\n", i, j, k, l, m);

    return 0;
}
