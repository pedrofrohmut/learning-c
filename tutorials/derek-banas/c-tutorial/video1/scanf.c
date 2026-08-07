#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your middle name initial?\n");
    char middleInitial;
    scanf(" %c", &middleInitial);
    printf("Your middleInitial is: %c\n", middleInitial);
    char first[30], last[30];
    printf("What is your name?\n");
    scanf(" %s %s", &first, &last);

    int month, day, year;
    printf("What is your birth date?\n");
    scanf(" %d/%d/%d", &day, &month, &year);
    
    printf("Your name is %s %c %s\n", first, middleInitial, last);
    printf("Your birth date is: %d/%d/%d\n", day, month, year);
}
