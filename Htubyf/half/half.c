// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

//bill_amount = x     ((((1 + y / 100) * x) + x) * (1 + z / 100)) * 0.5 ;
//tax_percent = y
//tip_percent = z

int main(void)
{
    float x = get_float("Bill before tax and tip: ");
    float y = get_float("Sale Tax Percent: ");
    int z = get_int("Tip percent: ");

    float total = x * (1 + y/100.0);
    total = total * (1 + z/100.0);
    float half = total /2;

    printf("You will owe $%.2f each!\n", half);

}

