#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Please give me an int between 1 and 10: \n");
    int n = GetInt();
    
    switch (n)
    {
        case 1:
        case 2:
        case 3:
            printf("It's a small int!");
            break;

        case 4:
        case 5:
        case 6:
        case 7:
            printf("It's a medium int!");
            break;
            
        case 8:
        case 9:
        case 10:
            printf("It's a large int!");
            break;
            
        default:
            printf("Wrong int!");
            break;
    }
}
