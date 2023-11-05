#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//int main(void)
//argc - argument count, argv - array of strings
int main(int argc, string argv[]);

{
    string name = get_string("What's your name? ");
    //printf("hello, %s\n", name);

    //[1] means 1st word after the program name in terminal. you can add words in the program

    printf ("hello, %s\n", argv[1]);
}
