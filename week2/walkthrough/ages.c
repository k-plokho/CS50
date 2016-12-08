#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("How many people in this room&\n");
        n = GetInt();
    }
    while (n < 1);
    
    int ages[n];
    
    for(int i = 0; i < n; i++)
    {
        printf("How old is the person #%i\n", i + 1);
        ages[i] = GetInt();
    }
    
    printf("Time passes...\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("A year from now, the person #%i will be %i years old!\n", i + 1, ages[i] + 1);
    }
}
