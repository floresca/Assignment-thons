#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    char *letters = get_string("Enter your letters: ");
    char hold = letters[0];
    int i;
    int there = 0;


     for (i = 0; i < strlen(letters); i++)
     {

        if (letters[i] == hold + 2)
        {
            there = 1;
            char missingletter = letters[i] - 1;
            printf("%c\n", missingletter);
        }
        else
        {
            hold = letters[i];
        }

     }

        if (there == 0)
        {
            printf("Undefined\n");
        }
}
