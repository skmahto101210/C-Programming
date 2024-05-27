// Date--date-03.10.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

int main()
{
  // // signed char
  for (int i = -128; i <= 127; i++)
  {
    printf("%c - %d\n", i, i);
  }

  // unsigned char
  for (int i = 0; i <= 255; i++)
  {
    printf("%c - %d\n", i, i);
  }

  return 0;
}