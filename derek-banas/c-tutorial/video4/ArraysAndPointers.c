#include <stdio.h>
#include <stdlib.h>

int main() {
    int primes[] = { 2, 3, 5, 7, 11 };
    printf("First index: %d\n", primes[0]);
    printf("First index: %d\n", *primes);
    printf("Second index: %d\n", primes[1]);
    printf("Second index: %d\n", *primes + 1);
    // -------------------------------------------------------------------------
    char * students[4] = { "John", "Jane", "Bob", "Daiane" };
    for (int i = 0; i < 4; i++) {
        printf("[%d] %s\n", &students[i], students[i]);
    }
    return 0;
}
