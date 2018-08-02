#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    char *sequence = get_string("Enter your DNA letters: ");

    for(int i = 0, n = strlen(sequence); i < n; i++)
    {

        char first = sequence[i];
        char pair;

        switch (sequence[i])
        {
            case 'C':
                pair = 'G';
                break;
            case 'G':
                pair = 'C';
                break;
            case 'A':
                pair = 'T';
                break;
            case 'T':
                pair = 'A';
                break;
        }

        printf("%c,%c\n", first, pair);
    }
}