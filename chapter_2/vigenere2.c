#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // if (argc <= 1)
    // {
    //     printf("Please enter a string to encrypt.");
    //     return 1;
    // }

    // string key = get_string("enter a string: \n");
    // 'BACON'
    string encrypt = get_string("Encrypt: ");
    char *key = "abc";
    int keyIndex = 0;
    //increment current letter by
    // keyIndex % key.length // index

    // loop over each word
    for (int i = 0; i < strlen(encrypt); i++)
    {
        // printf("%s\n", argv[i]);

        // loop over each letter
        int l = encrypt[i];                          // letter we're encrypting
        int diff = key[keyIndex % strlen(key)] - 97; // what to increment it by.

        if (isupper(l))
        {
            printf("%c", (((l + diff) - 65) % 26) + 65);
        }
        else if (islower(l))
        {
            printf("%c", (((l + diff) - 97) % 26) + 97);
        }
        else
        {
            printf("%c", l);
        }
        keyIndex++;
    }

    return 0;
}