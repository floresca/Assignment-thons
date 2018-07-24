#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
    //Check if argc is any number other than 2 (should only have 1 argument)
    if (argc != 2)
    {
        //tsk tsk
        printf("you've Done Goofed, enter a number\n");
        return 1;
    }
    
    int n = atoi(argv[1]);
    int num = n;
    int isitPrime = 1;
    int counter = 2;
    int addition = 0;
    
    if (num == 1 || num == 0)
    {
        printf("%i is not prime\n", num);
    }
    else 
    {
        do
        {
            for (counter = 2; counter < num; counter++)
            {
                if (num % counter == 0){
                    isitPrime = 0;
                    break;
                }
            }
            if (isitPrime == 1 && counter == num)
            {
                addition += num;
                num -= 1;
            }
            counter = 2;
        }
        while (n != 1)
        
        printf("%i\n", addition);
    }
}