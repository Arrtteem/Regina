#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(int arg, string argv[])
{
    //get the text from the user
    string text = get_string("Text: ");

    //int count_the_letters exclude the puntuaton, spaces and numbers

    float letters = 0;
    for (int i = 0, lqty = strlen(text); i < lqty; i++)
    {
        if (isupper(text[i]))
        {
            letters = letters + 1;
        }
        else if (islower(text[i]))
        {
            letters = letters + 1;
        }
    }

    printf("Letters: %.0f\n", letters);

    //int count_the_words. they only can be separated by space

    int words = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ' && text[i+1] != ' ')
       words++;
    }
    printf("Words: %i\n", words);

    //count_sentences if they end with a '.' or a '!' or a '?'

    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' && text[i+1] == '.')
        continue;
        else if (text[i] == '!' && text[i+1] == '\"')
        continue;
        else if (text[i] == '?' && text[i+1] == '\"')
        continue;
        else if (text[i] == '.' && text[i+1] == '\"')
        continue;
        else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        sentences++;
    }
    printf("Sentences: %i\n", sentences);


    // float letters per 100 words, round it up to .1
    float l = letters/words * 100.0;
    printf ("%.1f\n", l);


    //float sentsnces per 100 words, round it up to .1

    float s = (float)sentences/words * 100;

    //grade formula
    round(int grade) = (0.0588 * l) - (0.296 * s) - 15.8;
    printf("%i\n", grade);

    if (grade < 1)
    printf("Before Grade 1\n");
    else if (grade > 16)
    printf("Grade 16+\n");
    else
    printf("Grade %i\n", grade);

    //printf("Grade %i\n", grade);
}
