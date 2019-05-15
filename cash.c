#include <cs50.h>
#include <stdio.h>
#include <math.h>

//https://cs50.me/authorize
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
    //printf("\n");
    
    //quarter
    int quarter = 25;
    int quarters = change / quarter;
    quarters = (int)floor(quarters);
    //quarters = (int) quarters;
    change = change - (quarters * quarter);

    //printf("%i quarters\n", quarters);
    //printf("%f in change left change\n", change);
    
    //dimes
    int dime = 10;
    int dimes = change / dime;
    dimes = (int)floor(dimes);
    //dimes = (int) dimes;
    change = change - (dimes * dime);

    //printf("%i dimes\n", dimes);

    //nickels
    int nickel = 5;
    int nickels = change / nickel;
    nickels = (int)floor(nickels);
    //nickels = (int) nickels;
    change = change - (nickels * nickel);

    //printf("%i nickels\n", nickels);
    //printf("%i in change left change\n", change);

    //pennies
    int penny = 1;
    int pennies = change / penny;
    pennies = (int)floor(pennies);
    //dimes = (int) dimes;
    change = change - (pennies * penny);

    //printf("%i pennies\n", pennies);

    //coins & new line
    coins = quarters + dimes + nickels + pennies;
    //printf("\n");
    printf("%i\n", coins);

}
