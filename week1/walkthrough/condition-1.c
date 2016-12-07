#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please give me an int: ");
    int n = GetInt();
    
    if (n > 0)
    {
        printf("you've picked a positive int!");
    }
    else if (n == 0)
    {
        printf("you've picked 0!");
    }
    else
    {
        printf("you've picked a negative int!");
    }
}
