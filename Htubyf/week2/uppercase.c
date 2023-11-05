#include <cs50.h>
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
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // subtract 32 to get new value for upper case letters by ASCII values chart
            printf("%c", s[i] - 32);
        }
        else
        {
            // othervise 
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
