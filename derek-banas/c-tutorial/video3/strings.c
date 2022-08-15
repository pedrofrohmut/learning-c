#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n");
    char name[14] = "Pedro Frohmut"; // Always leave space for \0
    int primes[3] = { 1, 2, 3 };
    int morePrimes[] = { 13, 17, 19, 23 };
    printf("The first prime is %d\n", primes[0]);
    char china[6] = { 'C', 'h', 'i', 'n', 'a', '\0' };
    char city[] = "Paris";
    char yourCity[30];
    // -------------------------------------------------------------------------
    printf("What is your city name? ");
    fgets(yourCity, 30, stdin);
    printf("Hello %s", yourCity);
    for (int i = 0; i < 30; i++) {
        if (yourCity[i] == '\n') {
            yourCity[i] = '\0';
            break;
        }
    }
    printf("Hello %s", yourCity);
    // -------------------------------------------------------------------------
    printf("\n");
    printf("Is your city Paris? %d\n", strcmp(city, yourCity));
    char yourState[] = ", São Paulo";
    strcat(yourCity, yourState);
    printf("Your live in %s\n", yourCity);
    char thirdCity[6] = "Paris";
    printf("Letters in Paris: %ld\n", strlen(thirdCity));
    // How to safe copy a string?
    strncpy(thirdCity, "El Pueblo del la Reina de Los Angeles", sizeof(thirdCity));
    printf("New City is %s\n", thirdCity);
    return 0;
}
