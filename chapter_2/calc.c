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

    char operator = (char)argv[2][0];
    float a = atof(argv[1]);
    float b = atof(argv[3]);

    switch(operator)
    {
        case '+':
            printf("%f\n", (a + b));
            break;
        case '-':
            printf("%f\n", (a - b));
            break;
        case 'x':
            printf("%f\n", (a * b));
            break;
        case '/':
            printf("%f\n", (a / b));
            break;
        case '%':
            printf("%f\n", (a - (b * (int)(a / b ))));
            break;
        default:
            printf("Sorry I can only do simple equations using +, -, /, x, %%");
            return 1;
    };

    return 0;
};