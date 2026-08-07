#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("What to do?\n");
    char option = 0;
    do {
        printf("\n");
        printf("1. What time it is?\n");
        printf("2. What is todays date?\n");
        printf("3. What day it is?\n");
        printf("4. Quit\n");
        scanf(" %c", &option);
    } while(option != '1' && option != '2' && option != '3' && option != '4');

    if (option == '1') {
        printf("Print the time\n");
    } else if (option == '2') {
        printf("Print the date\n");
    } else if (option == '3') {
        printf("Print the day\n");
    } else {
        printf("Bye Bye\n");
        exit(0);
    }

    switch (option) {
        case '1':
            printf("Print the time\n");
            break;
        case '2':
            printf("Print the date\n");
            break;
        case '3':
            printf("Print the day\n");
            break;
        dafault:
            printf("Print the time\n");
            exit(0);
    }
    
    return 0;
}
