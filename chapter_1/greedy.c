#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float input = get_float("Amount: ");
    int remaining = round(input * 100);
    int count = 0;

    count += floor(remaining / 25);
    remaining %= 25;

    count += floor(remaining / 10);
    remaining %= 10;

    count += floor(remaining / 5);
    remaining %= 5;

    count += floor(remaining / 1);
    remaining %= 1;

    printf("%i\n", count);

    return 0;
}