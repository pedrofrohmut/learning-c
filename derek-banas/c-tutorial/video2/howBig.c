#include <stdio.h>
#include <math.h>

int main()
{
    int numberHowBig = 0;
    printf("How Many Bits? ");
    scanf(" %d", &numberHowBig);
    // 0: Print what is given
    // 1: Print what is given
    // 2: 1  +  2 = 3      11  => i: 1
    // 3: 3  +  4 = 7     111  => i: 2
    // 4: 7  +  8 = 15   1111  => i: 3
    // 5: 15 + 16 = 31  11111  => i: 4
    float i = 1;
    float result = 1;
    while (i < numberHowBig) { 
        result = result + pow(2, i);
        i++;
    }
    if ((numberHowBig == 0) || (numberHowBig == 1)) {
        printf("Max value: %d\n", numberHowBig);
    } else {
        printf("Max value: %.0f\n", result);
    }
    return 0;
}
