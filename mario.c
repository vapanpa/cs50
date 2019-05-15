#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    //height
    int height = get_int("height?\n");
    
    //reprompt for valid height
    while (height < 1 || height > 8)
    {
        height = get_int("height?\n");
    }
    
    int count = 1;
    //making pyramid
    for (int i = 0; i < height; i++)
    {
        //spaces
        for (int j = 0; j < height - 1 - i; j++)
        {
           printf(" ");
        }
        
        //hashes
        for (int m = 0; m < count; m++)
        {
            printf("#");
        }
        
        count = count + 1;
        printf("\n");
    }    
       
}
