#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // change
    float change = get_float("how much change is owed?: ");
    int coins = 0;

    //reprompt
    while (change < 0)
    {
        change = get_float("how much change is owed?: ");    
    }

    //conversion & new line
    change = 100 * change;
    change = (int) change;
    
    //quarter
    int quarter = 25;
    int quarters = change / quarter;
    quarters = (int)floor(quarters);

    change = change - (quarters * quarter);
    
    //dimes
    int dime = 10;
    int dimes = change / dime;
    dimes = (int)floor(dimes);

    change = change - (dimes * dime);

    //nickels
    int nickel = 5;
    int nickels = change / nickel;
    nickels = (int)floor(nickels);

    change = change - (nickels * nickel);

    //pennies
    int penny = 1;
    int pennies = change / penny;
    pennies = (int)floor(pennies);

    change = change - (pennies * penny);
    
    //coins & new line
    coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);

}
