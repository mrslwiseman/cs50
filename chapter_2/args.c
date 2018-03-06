// argc argument count
// program name counts as an argument
// division is calculated by whitespace between args

// argv is argument vector
// array of STRING stores, one string per element
// actual text that was entered
// mv file.txt /cs50/chapter1
// argv = ['mv', 'file.txt', '/cs50/chapter1']
#include <stdio.h>
int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++)
        printf("argv[%d] is: %s\n", i, argv[i]);  
}

// compile:
// gcc args.c -o args

// run:
// ./args argument1 argument2
// argv[0] is: ./args
// argv[1] is: argument1
// argv[2] is: argument2
