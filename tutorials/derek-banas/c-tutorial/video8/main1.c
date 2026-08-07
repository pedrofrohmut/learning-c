#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt_to_store;
    printf("How many  numbers do you want to store: \n");
    scanf("%d", &amt_to_store);
    int * p_rnd_nums;
    p_rnd_nums = (int *) malloc(sizeof(int) * amt_to_store);
    if (p_rnd_nums != NULL) {
        int i = 0;
        printf("Enter a number or quit: \n");
        while (i < amt_to_store && scanf("%d", &p_rnd_nums[i]) == 1) {
            printf("Enter a number or quit: \n");
            i++;
        }
        printf("\nYou entered the following numbers\n");
        for (int j = 0; j < i; j++) {
            printf("%d  ", p_rnd_nums[j]);
        }
        printf("\n");
    }
    free(p_rnd_nums);
    return 0;
}
