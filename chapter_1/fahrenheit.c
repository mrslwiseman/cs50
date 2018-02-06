#include <stdio.h>
#include <cs50.h>

int main()
{
    float c = get_float("Prompt: ");
    float f = ((c * 9) / 5) + 32;

    printf("%.1f\n", f);
    return 0;
}