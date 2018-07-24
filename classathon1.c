#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//the main function will take 2 arguments
int main(int argc, string argv[])
{

    int i = atoi(argv[1]);
    long long result = i;

    if (argc != 2)
    {

        printf("Program cannot continue. \n");
        return 1;
    }

    if (i == 0 || i == 1)
    {
       printf("%i\n", i);
    }

    do
    {
        i--;
        result *= i;
    }
    while (i > 1);
     printf("%lli\n", result);
}