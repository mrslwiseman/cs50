#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 2){
        printf("Please enter a Celcius value to convert\n");
        return 1;
    }
    float c = atof(argv[1]);
    float f = ((c * 9) / 5) + 32;
    printf("%.1f\n", f);
    return 0;
}