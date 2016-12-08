#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Please, enter the name!\n");
    string name = GetString();
    
    printf("%c", toupper(name[0]));
    
    for(int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            printf("%c\n", toupper(name[i + 1]));
        }
    }
}
