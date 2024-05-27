// Date-15.09.22
// Author-saksham kr
#include <stdio.h>
#include <math.h>

char get()
{
    char s;
    printf("\nAre you want to repeat once again then press Y/y otherwise press E/e for exit.\n");
    scanf("%c", &s);
    fflush(stdin);
    return s;
}

int main()
{
    int c, d, t;
    char s;

    printf("Enter two integer value C & D.\n");
    printf("C-");
    scanf("%d", &c);
    fflush(stdin);
    printf("D-");
    scanf("%d", &d);
    fflush(stdin);

    printf("You entered the value of C- %d & D- %d\n", c, d);

    t = c;
    c = d;
    d = t;

    printf("After the interchange, the value of C- %d & D- %d.\n", c, d);
    s = get();

    if (s == 'y' || s == 'Y')
    {
        main();
    }

    printf("You are exit.");

    return 0;
}