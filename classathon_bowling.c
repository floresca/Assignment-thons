#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{


   string game = get_string("enter the individual scores of your game (as an array): ");

   int frame = 0;
   int score = 0;
   int strike = 0;

   int gamelength = strlen(game);
   for (int i = 0; i < gamelength; i++)
   {
       // printf("%c\n", game[i]);
       if (isdigit(game[i]))
       {

           // check if a 10 is entered
           if (game[i] == '1')
           {
               if (game[i+1] == '0')
               {
                   score += 10;

                   if (strike > 0)
                   {
                        score += 10;
                        strike -= 1;
                   }
                   strike += 2;

                   continue;

               } else {

                   score += 1;
               }

           } else {
               score += (int) game[i]-'0';
           }

           if (strike > 0)
           {
               score += (int) game[i] - '0';
           }

           frame += 1;

        //   printf("%i\n", (int) game[i]-'0');
       }


   }

   printf("final score:\t %i\n", score);
   printf("final frame:\t %i\n", frame);

}

// int strike()
// {
//     score += 10;
//     strike += 2;


// }
