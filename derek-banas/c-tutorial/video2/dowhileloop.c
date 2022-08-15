#include <stdio.h>
#include <ctype.h>

int main()
{
    char size;
    do {
        printf("What is the size of the shirt you want? ");
        scanf(" %c", &size);
        size = toupper(size);
    } while(size != 'L' && size != 'M' && size != 'S');

    char* sizeName = (size == 'S') ? "small" : (size == 'L') ? "large" : "medium";
    printf("Here a shirt of %s size.", sizeName);
    return 0;
}
