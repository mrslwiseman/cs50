#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{

    if (argc != 4)
    {
        printf("Please enter arguments a <+ | - | * | / | %%>\n");
        return 1;
    };

    int operator = argv[2][0];
    float a = atof(argv[1]);
    float b = atof(argv[3]);

    switch(operator)
    {
        case 43: // +
            printf("%f\n", (a + b));
            break;
        case 45: // -
            printf("%f\n", (a - b));
            break;
        case 120: // x
            printf("%f\n", (a * b));
            break;
        case 47: // /
            printf("%f\n", (a / b));
            break;
        case 37: // %
            printf("%f\n", (a - (b * (int)(a / b ))));
            break;
        default:
            printf("Sorry I can only do simple equations using +, -, /, x, mod");
            return 1;
    };

    return 0;
};