#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x;
    do
    {
        x = get_int("Minimum: ");
    }
    while (x < 1);

    int y;
    do
    {
        y = get_int("Maximum: ");
    }
    while (x >= y);

  for (int i = x; i <= y; i++)
  {
    printf("%i\n", i);

    for (int b = i; b => x; b--)
    {
        
           if (i % b == 0)
           printf("i\n");
    }

  }

}

