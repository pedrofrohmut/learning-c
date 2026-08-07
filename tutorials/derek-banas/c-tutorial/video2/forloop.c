#include <stdio.h>

int main()
{
    printf("Simple for loop: ");
    for (int i = 0; i <= 20; i++) {
        if (i != 20) {
            printf("%d, ", i);
        } else {
            printf("%d", i);
        }
    }
    // -------------------------------------------------------------------------
    printf("\nLoop with continue");
    for (int i = 0; i <= 40; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i != 40) {
            printf("%d, ", i);
        } else {
            printf("%d", i);
        }
    }
    return 0;
}
