#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, spaces, hash;
    
    //user's input
    do 
    {
        printf("Height:");
        height = GetInt();
    }
    while (height <= 0 || height >= 23);
    
    //rows loop
    for (int a = 0; a < height; a++)
    {
        
    //spaces/hashes loop
        for (spaces = height - a; spaces >= 0; spaces--)
        {
            printf(" ");
        }
        for (hash = 0; hash <= (a); hash++)
        {
            printf("#");    
        }
    printf("#\n");
    }
}
