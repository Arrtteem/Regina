#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n;

    do
    {
        n = get_int("Heigth= ");
    }
    while (n <= 0 || n > 8);


    for (int r = 0; r < n; r++)
    {
        for (int s = 0; s < n - r - 1; s++)
        {
            printf(" ");
        }
        for (int c = 0; c <= r; c++)
        {
            printf("#");
        }
        printf("  ");
        for (int c = 0; c <= r; c++)
        {
          printf("#");
        }
       printf("\n");
    }

}
