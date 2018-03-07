#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Gimme something to work with!\nValid input:\n<DAYS> <PENNIES>\n");
        return 0;
    };

    int days = atoi(argv[1]);
    int pennies = atoi(argv[2]);

    if( days > 31 || days < 28)
    {
        printf("C'mon how many days are in each month?\n");
        return 2;
    };

    if(pennies <= 0)
    {
        printf("What a stinge! You have to start with at least 1 penny!\n");
        return 3;
    };

    double sum = ((pennies * (pow(2, days))) - pennies) / 100;
    printf("$%.2f\n", sum);
    return 0;
}