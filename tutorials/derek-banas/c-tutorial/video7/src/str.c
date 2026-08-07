#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char theChar;
    printf("Enter a string\n");
    while ((theChar = getchar()) != '~') {
        putchar(theChar);
    }
    return 0;
}
