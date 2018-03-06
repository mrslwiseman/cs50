#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string();
    char initials[5] = "";
    int iCount = 0;

    if(s != NULL){
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            // find first letter
            if(iCount == 0 && !isspace(s[i]))
            {
                initials[0] = toupper(s[i]);
                iCount++;
            }
            
            else if (isspace(s[i]) && !isspace(s[i+1]))
            {
                initials[iCount] = toupper(s[i+1]);
                iCount++;
            }
        }
        printf("%s\n", initials);
    }
}