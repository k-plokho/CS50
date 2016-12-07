#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string a = GetString();
    
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c\n", a[i]);
    }
}
