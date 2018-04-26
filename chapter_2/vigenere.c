#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int isValidKey(char *key)
{
    // loop over each character in key, 
    // if there is an invalid character, then reject
    for(int i = 0; i < strlen(key); i++)
    {
        // printf("key: %c\n", key[i]);
        if(!isalpha(key[i]))
        {
            return 0;
        }
    }
    return 1; // true
}

int main(int argc, char *argv[])
{
    char *key = argv[1];

    if (argc != 2 || !isValidKey(key))
    {
        printf("Usage: ./vigenere k");
        return 1;
    }
    int keyIndex = 0;
    string plaintext = get_string("plaintext: ");

    // need to check key 



    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // printf("key: %c\n", key[keyIndex] );
        // if(!isalpha(key[keyIndex]))
        // {
        //     printf("true");
        //     return 1;
        // }

        int l = plaintext[i]; 
        int diff = tolower(key[keyIndex % strlen(key)]) - 97; 
        if (isupper(l))
        {
            printf("%c", (((l + diff) - 65) % 26) + 65);
            keyIndex++;
        }
        else if (islower(l))
        {
            printf("%c", (((l + diff) - 97) % 26) + 97);
            keyIndex++;
        }
        else
        {
            printf("%c", l);
        }
    }
printf("\n");
return 0;
}