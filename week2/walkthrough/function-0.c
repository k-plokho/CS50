#include <stdio.h>
#include <cs50.h>

void PrintName(string name);

int main(void)
{
    printf("What's your name?\n");
    string name = GetString();
    PrintName(name);
}

void PrintName(string name)
{
    printf("Hello, %s!\n", name);
}
