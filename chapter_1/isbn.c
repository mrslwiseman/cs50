#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    long long int isbn, x;
    int i, sum, digit, product;
    string valid;

    do
    {
        isbn = get_long_long("ISBN: ");

        if(isbn < 100000000)
        {
        isbn = get_long_long("RETRY: ");
        }

        x = isbn;
    } while(isbn < 100000000);

    for(i = 10; i >0; i--)
    {
        digit = x % 10;
        product = (int)floor(digit *i);
        sum += product;
        x = x/10;
    }

    valid = (sum % 11 == 0) ? "YES" : "NO";
    printf("%s\n", valid);

    return 0;
}

