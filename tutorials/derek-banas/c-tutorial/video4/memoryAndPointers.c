#include <stdio.h>
#include <stdlib.h>

int main() {
    int rand1 = 12;
    int rand2 = 15;
    printf("rand1 = %p and rand2 = %p\n", &rand1, &rand2);
    printf("rand1 = %d and rand2 = %d\n", &rand1, &rand2);
    printf("Size of int %d\n", sizeof(rand1));
    // -------------------------------------------------------------------------
    int* pRand1 = &rand1;
    printf("Pointer %p\n", pRand1);
    printf("Pointer %d\n", pRand1);
    printf("The value of the pointer variable: %d\n", *pRand1);
    // -------------------------------------------------------------------------
    return 0;
}
