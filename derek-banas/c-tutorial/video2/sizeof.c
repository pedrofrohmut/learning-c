#include <stdio.h>

int main()
{
    printf("A char takes up %d bytes\n", sizeof(char));
    printf("A int takes up %d bytes\n", sizeof(int));
    printf("A long takes up %d bytes\n", sizeof(long));
    printf("A float takes up %d bytes\n", sizeof(float));
    printf("A double takes up %d bytes\n", sizeof(double));
    // -------------------------------------------------------------------------
    printf("\n");
    int bigInt = 2147483648;
    printf("I'm bigger than you have heard %d\n", bigInt);
    return 0;
}
