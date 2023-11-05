#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name ? ");
    int age = get_int("How old are you ? ");
    long number = get_long("What's your phone number ? ");

    printf("Name: %s\nAge: %i\nPhone number: %ld\n ", name, age, number);
}