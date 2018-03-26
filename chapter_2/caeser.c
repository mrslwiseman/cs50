#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
// clang caeser.c -lcs50  -o caeser

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caeser k");
        return 1;
    }

    int k = atoi(argv[1]);

    // get the plaintext
    char *plaintext = get_string("plaintext: ");

    // loop over each argument
    printf("ciphertext: ");
    for (int i = 1; i < argc; i++)
    {
        // loop over each letter in plaintext
        for (int j = 0; j < strlen(plaintext); j++)
        {
            int l = plaintext[j];
            if (isupper(l))
            {
                printf("%c", (((l + k) - 65) % 26) + 65);
            }
            else if (islower(l))
            {
                printf("%c", (((l + k) - 97) % 26) + 97);
            }
            else
            {
                printf("%c", l);
            }
        }
    }
    printf("\n");
    return 0;
}

// accepts non negative integer eg 1;
// k can be greater than 26;
// prompt: ask for a k int
// prompt: plaintext:
// output cipher.