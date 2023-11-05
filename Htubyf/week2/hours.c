#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

float sum(int hours[], int weeks, char output);

int main(void)
{

    //std::cout<<hours<<std::endl;

    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", sum(hours, weeks, output));
}

// TODO: complete the calc_hours function
float sum(int hours[], int weeks, char output)
{
    if (output == 'A')
    {
      int average = 0;
      for (int i = 0; i < weeks; i++)
          {
            average += hours[i];
          }
      return average / (float) weeks;
    }

      else
      {
      int total = 0;
      for (int i = 0; i < weeks; i++)
      {
        total += hours[i];
      }
      return total;
      }

}

