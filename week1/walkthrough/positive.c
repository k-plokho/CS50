#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf ("Please give me a positive int\n");
        n = GetInt();
    }
    while (n < 1);
    printf("Thanks for a positive int!");
}
