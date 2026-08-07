#include <stdio.h>
#include <stdlib.h>

void generateTwoRandomNumbers(int rand1, int rand2) {
    rand1 = rand() % 50 + 1;
    rand2 = rand() % 50 + 1;
    printf("New rand1 in function = %d\n", rand1);
    printf("New rand2 in function = %d\n", rand2);
}

void pointerRandomNumbers(int* rand1, int* rand2) {
    *rand1 = rand() % 50 + 1;
    *rand2 = rand() % 50 + 1;
    printf("New rand1 in function = %d\n", *rand1);
    printf("New rand2 in function = %d\n", *rand2);
}

void editMessageSent(char* message, int size) {
    char newMessage[] = "New message";
    if (size < sizeof(newMessage)) {
        printf("The new message is too big!\n");
        return;
    }
    for (int i = 0; i < sizeof(newMessage); i++) {
        message[i] = newMessage[i];
    }
}

int main() {
    int* rand1 = 0;
    int* rand2 = 0;
    generateTwoRandomNumbers(rand1, rand2);
    printf("Rand1 = %d\n", rand1);
    printf("Rand2 = %d\n", rand2);
    // -------------------------------------------------------------------------
    printf("Main before function call\n");
    printf("Rand1 = %d\n", rand1);
    printf("Rand2 = %d\n", rand2);
    pointerRandomNumbers(&rand1, &rand2);
    printf("Main after function call\n");
    printf("Rand1 = %d\n", rand1);
    printf("Rand2 = %d\n", rand2);
    // -------------------------------------------------------------------------
    char randomMessage[] = "Old Message";
    printf("Old Message: %s\n", randomMessage);
    editMessageSent(randomMessage, sizeof(randomMessage));
    printf("New Message: %s\n", randomMessage);
    return 0;
}
