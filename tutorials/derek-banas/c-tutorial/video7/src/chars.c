#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void getCharInfo()
{
    char c;
    while ((c = getchar()) != '\n') {
        printf("Letter or Number %d\n", isalnum(c));
        printf("Alphabetic char %d\n", isalpha(c));
        printf("Standard blank %d\n", isblank(c));
        printf("Ctrl char %d\n", iscntrl(c));
        printf("Number char %d\n", isdigit(c));
        printf("Anything but spaces %d\n", isgraph(c));
        printf("Is Lowercase %d\n", islower(c));
        printf("Is Uppercase %d\n", isupper(c));
        printf("Is Uppercase %d\n", isupper(c));
        printf("Is Punctuation %d\n", ispunct(c));
    }
}

int main()
{
    getCharInfo();
    return 0;
}
