#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//the main function will take 2 arguments
int main(int argc, string argv[])
{

    int i = atoi(argv[1]);
    int a = 1;
    int b = 1;
    int c = 2;

    if (argc != 2)
    {

        printf("Program cannot continue. \n");
        return 1;
    }

    if (i == 1 && a == 1 )
    {
        printf("%i\n", i);
    }

    else
    {

        do
        {
            b = a + b;
            a = b - a;
            if (b <= i && b % 2 != 0)
            {
                c += b;
            }
        }
        while (b < i);
        printf("%i\n", c);
    }
}