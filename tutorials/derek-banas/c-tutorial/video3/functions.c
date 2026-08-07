#include <stdio.h>

int globalVar = 0;

int addTwoNumbers(int x, int y) {
    return x + y;
}

void changeVariables() {
    int age = 40;
    printf("age inside the function = %d\n", age);
    globalVar = 100;
    printf("globalVar inside to the function = %d\n\n", globalVar);
}

int main()
{
    int total = addTwoNumbers(4, 5);
    printf("The sum is %d\n", total);
    printf("----------------------------\n");

    int age = 10;
    globalVar = 50;
    printf("age before a call to the function = %d\n", age);
    printf("globalVar before a call to the function = %d\n\n", globalVar);

    changeVariables();
    printf("age after a call to the function = %d\n", age);
    printf("globalVar after a call to the function = %d\n", globalVar);

    return 0;
}
