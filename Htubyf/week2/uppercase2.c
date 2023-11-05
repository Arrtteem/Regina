#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");

    printf("After:  ");

    for (int i = 0, n = strlen(s); i < n; i++)
    
    // IF the charachter in S at location [I] is >= capital A
    //           AND
    // <= little Z
    {
        //if (s[i] >= 'a' && s[i] <= 'z')
        //if (islower(s[i]))
        {
            // subtract 32 to get new value for upper case letters by ASCII values chart
            //printf("%c", s[i] - 32); thanks to new library CTYPE.H

            printf("%c", toupper(s[i]));
        }
        //else
       // {
           // printf("%c", s[i]);
        //}
    }
    printf("\n");
}
