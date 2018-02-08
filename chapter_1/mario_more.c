#include <stdio.h>
#include <cs50.h>

int main()
{
    int count, i;
    do
    {
        count = get_int("Height: ");
    } while (count < 1 || count > 23);

    char *block = "#######################";
    char *space = "                       ";

    int nSpaces = count - 1;
    int nBlocks = count - (count - 1);

    for (i = 0; i < count; i++)
    {
        printf("%.*s%.*s  %.*s\n", nSpaces, space, nBlocks, block, nBlocks, block);
        nSpaces--;
        nBlocks++;
    }
    return 0;
}
