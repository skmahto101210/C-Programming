// Date-20.09.22
// Author-Saksham_Kr
#include <stdio.h>
//#include <>

//********************************IMORTANT**********************************

int main()
{
   int p, m = 21, com;
   char c;
   printf("-WLECOME To MATCHSTICK_GAME-\n\nRules are so simple:-\n1.You have 21 matchstick.\n2.Pick 1,2,3, or 4 matchsticks.\n3.After your moves, the computer does its picking.\n4.Whoever is forced to pick up the last matchstick loses the game.\n\n");
up:
   printf("Are you want to play the game then press Y/y otherwise N/n.\n");
   scanf("%c", &c);
   fflush(stdin);

   if (c == 'Y' || c == 'y')
   {
      while (1)
      {
         printf("\nNumber of matchstick left= %d\n", m);
         printf("Pick 1,2,3, or 4 matchsticks.\n");
         scanf("%d", &p);
         // fflush(stdin);

         if (p > 4 || p < 1)
         {
            printf("_WRONG_INPUT_.\n");
            continue;
         }

         m -= p;

         printf("\nNumber of matchstick left= %d\n", m);

         com = 5 - p;

         printf("Out of which computer picked up= %d\n", com);

         m -= com;

         if (m == 1)
         {
            printf("\nNumber of matchstick left= %d\n", m);
            printf("You lost the Game!!\n");
            break;
         }
      }
   }
   else if (c == 'N' || c == 'n')
   {
      printf("      You Exit the Game.\n");
   }
   else
   {
      printf("_WRONG_INPUT_.\n");
      goto up;
   }

   return 0;
}