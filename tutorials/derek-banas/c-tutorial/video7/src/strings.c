#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void shortHandPrint() 
{
    char* r_str = "Just some random stuff";
    // The short way to do (hard to understand)
    while (*r_str) {
        putchar(*r_str++);
    }
}

void longerWayToPrint()
{
    char* r_str = "Just some random stuff";
    // The long way to do it (but easier to grasp)
    int i = 0;
    while (r_str[i] != '\0') {
        putchar(r_str[i]);
        i++;
    }
}

void noMoreNewLine(char *str)
{
    char *isANewLine;
    // searches within the string pointed to by s for the last occurrence of the 
    // character c. It returns a pointer to it
    isANewLine = strrchr(str, '\n');
    if (isANewLine) {
        *isANewLine = '\0';
    }
}

void makeLowerCase(char *str)
{
    int i = 0;
    // continues till reach the \0 character
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}

int main()
{
    char doYouWantToQuit[10];
    do {
        printf("Enter quit to quit: ");
        fgets(doYouWantToQuit, 10, stdin);
        noMoreNewLine(doYouWantToQuit);
        makeLowerCase(doYouWantToQuit);
        printf("You typed: %s\n", doYouWantToQuit);
    } while (strcmp(doYouWantToQuit, "quit"));
    printf("Game Over\n");
    return 0;
}
