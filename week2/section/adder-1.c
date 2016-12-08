#include <stdio.h>
#include <cs50.h>

int add_two_ints(int a, int b);

int main(void)
{
    printf("Give me an int: \n");
    int a = GetInt();
    
    printf("Give me another int: \n");
    int b = GetInt();
    
    int c = add_two_ints(a, b);
    
    printf("The sum of %i and %i is %i\n", a, b, c);
}

int add_two_ints(int a, int b)
{
    int c = a + b;
    return c;
}
