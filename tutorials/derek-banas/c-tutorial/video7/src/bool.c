#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // You need stdbool to use booleans in C
    _Bool isNum;
    
    int n;
    int sum = 0;
    printf("Enter a number\n");
    isNum = (scanf("%d", &n) == 1);
    while (isNum) {
        sum = sum + n;
        printf("Enter a number\n");
        isNum = (scanf("%d", &n) == 1);
    }
    printf("The sum is %d\n", sum);

    return 0;
}
