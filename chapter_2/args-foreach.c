// argc argument count
// program name counts as an argument
// division is calculated by whitespace between args

// argv is argument vector
// array of STRING stores, one string per element
// actual text that was entered
// mv file.txt /cs50/chapter1
// argv = ['mv', 'file.txt', '/cs50/chapter1']
#include <stdio.h>
#include <string.h> // gives us strlen()
int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        printf("argv[%d][%d] is: %c\n", i, j, argv[i][j]);  
}

// compile:
// gcc args.c -o args

// run:
// ./args argument1 argument2
// argv[0] is: ./args
// argv[1] is: argument1
// argv[2] is: argument2
