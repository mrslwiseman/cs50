#include <stdio.h>

// for CHARACTERS in C, use SINGLE quotes ''.
// for STRINGS in C, use DOUBLE quotes "".

int main(void)
{
    for(char c = 'A'; c <= 'Z'; c++) 
    {
        printf("%c is %i\n", c, (int) c);
    }
}

