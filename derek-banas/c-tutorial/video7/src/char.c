#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[50];
    printf("What is your name? ");
    // Get the user input but do NOT repect memory size *Dangerous* *Deprecated*
    gets(name);
    // Auto adds a \n
    puts("Hi");
    puts(name);
    //--------------------------------------------------------------------------
    int maximum_size = 50;
    fgets(name, maximum_size, stdin);
    fputs("Hi ", stdout);
    fputs(name, stdout);
    return 0;
}
