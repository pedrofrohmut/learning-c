#include <stdio.h>
#include <string.h>

#define MY_NAME "Pedro Frohmut"

int globalVar = 100;

int main() {
    printf("\n");

    printf("This will print to screen\n");

    int age = 38;
    printf("I am %d years old\n", age);

    long int superBigNum = -123450000;
    printf("Big number %ld\n", superBigNum);

    float pi = 3.14159;
    printf("Pi = %.3f\n", pi);

    double realBigPi = 3.1415914159141591;
    printf("BigPi = %.7f\n", realBigPi);

    char firstLetter = 'P';
    printf("The first letter of my name is %c\n", firstLetter);

    printf("My name is: %s\n", "Pedro");

    // Always privide 1 extra for the string terminator \0
    char name[9] = "John Doe";
    printf("My name is: %s\n", name);

    // If you did not provide the array size the compiler will put 1 extra automatically
    char name1[] = "Jane Smith";
    printf("Name1 is: %s\n", name1);

    return 0;
}
