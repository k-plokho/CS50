#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please give me an int between 1 and 10: ");
    int n = GetInt();
    
    if (n >= 1 && n <= 3)
    {
        printf("You've picked a small int");
    }
    else if (n >= 4 && n <= 6)
    {
        printf("You've picked a medium int");
    }
    else if (n >= 7 && n <= 10)
    {
        printf("You've picked a large int");
    }
    else
    {
        printf("You've picked invalid int");
    }
}
