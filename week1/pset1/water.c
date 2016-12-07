#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What's the length of your shower in minutes?\n") ;
    int minutes = GetInt();
    printf("A %i-minute shower is like using %i bottles of water!!!\n", minutes, minutes * 12) ;
}
