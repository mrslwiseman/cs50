#include <stdio.h>
#include <cs50.h>

int main()
{
    int count, i;
    do
    {
        count = get_int("Height: ");
    } while (count < 0 || count > 23);

    char *block = "########################";
    char *space = "                        ";

    int nBlocks = 2;
    int nSpaces = count - 2;

    for (i = 0; i < count; i++)
    {
        printf("%.*s%.*s\n", count-(1+i), space, nBlocks, block);
        nSpaces--;
        nBlocks++;
    }
    return 0;
}

