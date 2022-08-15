#include <stdio.h>

int main()
{
    int n = 0;
    int secret = 8;
    printf("Enter a number between 1 and 10: ");
    scanf(" %d", &n);
    while (1) {
        if (n == secret) {
            break;
        }
        printf("Not yet!");
        printf("\nTry another number between 1 and 10: ");
        scanf(" %d", &n);
    }
    printf("Congratulations you guessed! The secret number is %d\n", secret);
    return 0;
}
