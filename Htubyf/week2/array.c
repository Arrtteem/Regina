#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length;
    do
    {
        length = get_int("Length: ");
    }
    while (length < 1);

    int n[length];

    n[0] = 1;

    printf("%i\n", n[0]);

    for (int i = 1; i < length; i++)
    {
        n[i] = n[i - 1] * 2;

        printf("%i\n", n[i]);
    }

}
