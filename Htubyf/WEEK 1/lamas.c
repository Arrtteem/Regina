#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
         do
     {
     start = get_int("Starting population= ");
     }
     while (start < 9);
    int end;
     do
     {
     end = get_int("End size of population= ");
     }
     while (end < start);

    int years = 0;
    while (start < end)
    {
      start+= start / 12;
      // start+= start / 12; is the same as start = start + (start/12);
      years++;
      //in "my" code forgot to add years as we go
    }
    printf("Years needed: %i\n", years);

}
