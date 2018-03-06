

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    int initial_count = 0;

    if(s != NULL){
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            //check for first character
            if(initial_count == 0 && !isspace(s[i]))
            {
                printf("%c", toupper(s[i]));
                initial_count++;
            }

            else if (isspace(s[i]) && !isspace(s[i+1]))
            {
                printf("%c",toupper(s[i+1]));
                initial_count++;
            }
        }
        printf("\n");
    }
}